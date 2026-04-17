# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        
        for(char c : s){
            if(isalnum(c)){          
                str += tolower(c);   
            }
        }

        string temp = str;
        reverse(temp.begin(), temp.end());

        return temp == str;
    }
};

int main(){
    Solution s1;
    string s = "A man, a plan, a canal: Panama";

    cout<<s1.isPalindrome(s)<<endl;

    return 0;
}