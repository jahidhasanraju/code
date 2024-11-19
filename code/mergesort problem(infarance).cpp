#include<bits/stdc++.h>
using namespace std;

int mergeSort(int ara[], int l, int r)
{
    if(l == r) return 0;

    int mid = (l+r)/2;

    int typeA = mergeSort(ara, l, mid);
    int typeB = mergeSort(ara, mid+1, r);

    vector<int> vec;

    int i = l; // i er range (l, mid)
    int j = mid+1; // j er range (mid+1, r)
    int typeC = 0;

    while(i <= mid && j <= r)
    {
        if(ara[i] < ara[j]) // when we are pusing ara[i], all elements between mid+1 and j-1 index form typeC inversion with index i
            vec.push_back(ara[i]), typeC += j-mid-1, i++;
        else
            vec.push_back(ara[j]), j++;
    }

    while(i <= mid) vec.push_back(ara[i]), typeC += j-mid-1, i++;

    while(j <= r) vec.push_back(ara[j]), j++;

    // total loop iterations = O(r-l+1)

    for(int i = 0; i < vec.size(); i++) ara[i+l] = vec[i];

    return typeA+typeB+typeC;
}

void mergeSortTest()
{
    int ara[] = {3, 12, 1, 4, 6, 2, 10, 7};

    cout << "Before sort: ";
    for(int i = 0; i < 8; i++) cout << ara[i] << " ";
    cout << endl;

    int inversions = mergeSort(ara, 0, 7);

    cout << "After sort: ";
    for(int i = 0; i < 8; i++) cout << ara[i] << " ";
    cout << endl;

    cout << "Inversion count = " << inversions << endl;
}

int main()
{
    mergeSortTest();

    return 0;
}

