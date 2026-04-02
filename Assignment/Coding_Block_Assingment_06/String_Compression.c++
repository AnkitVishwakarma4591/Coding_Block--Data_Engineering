#include <bits/stdc++.h>
using namespace std;

string String_Compression(string &str){
    int n = str.size();
    string ans = "";

    int i = 0;

    while(i < n){
        char curr = str[i];
        int cnt = 0;

        while(i < n && str[i] == curr){
            cnt++;
            i++;
        }

        ans += curr;
        ans += to_string(cnt);
    }

    return ans;
}

int main(){
    string str;
    cin >> str;

    cout << String_Compression(str) << endl;

    return 0;
}