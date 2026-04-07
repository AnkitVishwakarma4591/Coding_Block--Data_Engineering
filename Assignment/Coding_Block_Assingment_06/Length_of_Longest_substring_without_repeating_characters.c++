
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int Longest_Substring(string &s){
        int n = s.size();

        unordered_set<char> st;
        int i = 0, j = 0;
        int maxLen = 0;

        while(j < n){
            // agar duplicate nahi hai
            if(st.find(s[j]) == st.end()){
                st.insert(s[j]);
                maxLen = max(maxLen, j - i + 1);
                j++;
            }
            else{
                // duplicate mila → shrink karo
                st.erase(s[i]);
                i++;
            }
        }
        return maxLen;
    }
};

int main(){
    Solution s1;
    string nums;
    cin >> nums;

    cout << s1.Longest_Substring(nums) << endl;
    return 0;
}

// Brute force

// #include <bits/stdc++.h>
// using namespace std;

// class Solution{
//     public:
//     bool notDuplicate(string &temp){
//         set<char> s;
//         for(char ch : temp){
//             s.insert(ch);
//         }
//         return s.size() == temp.size();
//     }

//     int Longest_Substring(string &nums){
//         int n = nums.size();

//         string ans;

//         int currSize = 0;

//         for(int i = 0 ; i < n ; i++){
//             string temp = "";
//             for(int j = i ; j < n ; j++){
//                 temp += nums[j];

//                 if(notDuplicate(temp) && temp.size() > currSize){
//                     ans = temp;
//                     currSize = temp.size();
//                 }
//             }
//         }
//         return ans.size();
//     }
// };
// int main() {
//     Solution s1;
//     string nums;
//     cin>>nums;

//     cout<<s1.Longest_Substring(nums)<<endl;

//     return 0;
// }
