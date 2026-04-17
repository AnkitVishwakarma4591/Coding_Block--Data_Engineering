# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int st = 0, end = n-1;

        while(st < end){
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
};

int main(){
    Solution s1;
    vector<char> s = {'h','e','l','l','o'};

    s1.reverseString(s);
    
    return 0;
}