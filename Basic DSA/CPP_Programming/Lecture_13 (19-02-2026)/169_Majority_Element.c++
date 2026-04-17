# include <bits/stdc++.h>
using namespace std;

// Booyer moores algorithmus
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int val : nums){
            if(count == 0){
                candidate = val;
            }
            if(val == candidate){
                count++;
            }else{
                count--;
            }
        }
        return candidate;
    }
};

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> m;
//         for(int val : nums){
//             m[val]++;
//         }
//         int maJElement = INT_MIN;
//         for(auto num : m){
//             maJElement = max(maJElement, num.second);
//         }
//         for(auto num : m){
//             if(maJElement == num.second){
//                 return num.first;
//             }
//         }
//         return -1;
//     }
// };

int main(){
    Solution s1;
    vector<int> nums = {3,2,3};

    cout<<s1.majorityElement(nums)<<endl;

    return 0;
}