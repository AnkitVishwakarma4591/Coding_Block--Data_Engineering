#include<bits/stdc++.h>
using namespace std;

int Longest_K_Unique_Character_Substrings(string &str, int k){
    int n = str.size();

    unordered_map<char, int> mp;
    int l = 0, r = 0;
    int maxLen = -1;

    while(r < n){
        // expand window
        mp[str[r]]++;

        // shrink if unique chars > k
        while(mp.size() > k){
            mp[str[l]]--;
            if(mp[str[l]] == 0){
                mp.erase(str[l]);
            }
            l++;
        }

        // check condition
        if(mp.size() == k){
            maxLen = max(maxLen, r - l + 1);
        }

        r++;
    }

    return maxLen;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;
        int k;
        cin >> k;

        cout << Longest_K_Unique_Character_Substrings(str, k) << endl;
    }
    return 0;
}