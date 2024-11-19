#include<iostream>
#include<string>
#include<map>
#include<queue>

using namespace std;

struct compare {
    bool operator()(pair<char, int> l, pair<char, int> r) {
        return r.second > l.second;
    }

};
void print(const map<char, int> a) {
    for (map<char, int>::const_iterator it = a.begin(); it != a.end(); it++) {
        cout << (it->first) << " " << (it->second) << endl;
    }

}

void prints(const map<char, string> a) {
    for (map<char, string>::const_iterator it = a.begin(); it != a.end(); it++) {
        cout << (it->first) << " " << (it->second) << endl;
    }

}

map<char, string> huffman(map<char, int> a) {
    priority_queue < pair < char, int >, vector < pair < char, int > >, compare > mappednodes;
    pair<char, int> root;
    pair<char, int> left, right;
    string s = "";
    map<char, string> result;

    for (map<char, int>::iterator itr = a.begin(); itr != a.end(); itr++) {
        mappednodes.push(pair<char, int>(itr->first, itr->second));
    }
    while (mappednodes.size() != 1) {
        left = mappednodes.top();
        mappednodes.pop();
        right = mappednodes.top();
        mappednodes.pop();
        root = make_pair('#', left.second + right.second);
        mappednodes.push(root);
        if (left.first != '#') {
            s = "0" + s;
            result[left.first] = s;
        }

        if (right.first != '#') {
            s = "1" + s;
            result[right.first] = s;
        }
    }
    return result;
}

int main() {
    string str;
    cout << "enter the string ";
    getline(cin, str);
    cout << endl;
    map<char,int>freq;
    for(int i=0;i<str.size();i++){
        freq[str[i]]++;
    }
    for(auto it=freq.begin();it!=freq.end();++it){
        cout<<it->first<<' '<<it->second<<endl;
    }
    cout << endl;
    map<char, string> codes = huffman(freq);
    prints(codes);


}
