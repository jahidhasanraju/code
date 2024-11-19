#include<bits/stdc++.h>
using namespace std;
void merge_sort(int ara[], int l, int r)
{
    if(l == r) return;

    int mid = (l+r)/2;

    merge_sort(ara, l, mid);
    merge_sort(ara, mid+1, r);
    vector<int> vec;
    int i = l, j = mid+1;
    while(i <= mid && j <= r)
    {
        if(ara[i] <= ara[j])
        {
            vec.push_back(ara[i]);
            i++;
        }
        else
        {
            vec.push_back(ara[j]);
            j++;
        }
    }

    while(i <= mid)
    {
        vec.push_back(ara[i]);
        i++;
    }

    while(j <= r)
    {
        vec.push_back(ara[j]);
        j++;
    }

    for(int i = l; i <= r; i++)
    {
        ara[i] = vec[i-l];
    }
}
int main()
{
    int ara[] = {3, 12, 1, 4, 6, 2, 10, 7};

    merge_sort(ara, 0, 7);

    for(int i = 0; i < 8; i++) printf("%d ", ara[i]);

    return 0;
}

