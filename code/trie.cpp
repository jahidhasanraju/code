
#include<bits/stdc++.h>
using namespace std;

/// # of nodes <= sum of dictionary words length
/// root = node no 1

const int N = 1e6+100; /// maximum number of nodes in the trie

int to[N][26]; /// to[u]['b'] = u node theke b edge diye gele kon node e jabo.
int totNodes = 1;
int Ends[N];
int subCnt[N];

/**

abcd

**/

void addString(string s) {
    int cur = 1;
    for(char ch : s) {
        if(to[cur][ch-'a'] == 0) to[cur][ch-'a'] = ++totNodes;
        cout<<totNodes<<endl;
        cur = to[cur][totNodes];
    }
    Ends[cur] = 1;
}

void dfs(int u) {
    subCnt[u] = Ends[u];
    for(int i = 0; i < 26; i++) {
        int v = to[u][i];
        if(v) {
            dfs(v);
            subCnt[u] += subCnt[v];
        }
    }
}

int query(string s) {
    int cur = 1;
    for(char ch : s) {
        if(to[cur][ch-'a'] == 0) return 0;
        cur = to[cur][ch-'a'];
    }
    return subCnt[cur];
}



int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        addString(s);
    }
    dfs(1);
    cout<<"number of quary"<<endl;
    int q;
    cin >> q;
    while(q--) {
        string t;
        cin >> t;
        cout << query(t) << "\n";
    }
}
