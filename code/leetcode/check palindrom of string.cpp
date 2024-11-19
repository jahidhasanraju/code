#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="8V8K;G;K;V;";
    int i = 0, j = s.size() - 1;
    bool check = true;
    while (i < j)
    {
        int k = s[i];
        int l = s[j];
        if (k >= 65 && k <= 90)
        {
            k += 32;
            s[i] = k;
        }
        if (l >= 65 && l <= 90)
        {
            l += 32;
            s[j] = l;
        }
        cout<<"k:"<<k<<' '<<"l:"<<l<<endl;
        if (((k >= 97 && k <= 122) || (k >= 48 && k <= 57)) &&
                ((l >= 97 && l <= 122) || (l >= 48 && l <= 57)))
        {
            cout<<"in condition"<<endl;
            cout << "k:" << k << ' ' << "l:" << l << endl;
            cout << s[i] << ' ' << s[j] << endl;
            if (k != l)
            {
                check = false;
                break;
            }
            i++;
            j--;
            continue;
        }
        if((k >= 97 && k <= 122) || (k >= 48 && k <= 57))j--;
            else i++;

    }

    return 0;
}
