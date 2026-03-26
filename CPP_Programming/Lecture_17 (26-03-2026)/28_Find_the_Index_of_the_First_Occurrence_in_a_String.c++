# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();

        for(int i = 0 ; i <= n - m ; i++){  
            int cnt = 0;

            for(int j = 0 ; j < m ; j++){
                if(haystack[i + j] == needle[j]){
                    cnt++;
                } else {
                    break;
                }
            }

            if(cnt == m) return i;
        }
        return -1;
    }
};

int main(){
    Solution s1;
    string haystack  = "sadbutsad";
    string needle   = "sad";

    cout<<s1.strStr(haystack, needle)<<endl;

    return 0;
}