# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};


// Brute Force Approach TLE
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int Max = INT_MIN;
        
//         for(int i = 0 ; i < n ; i++){
//             int Sum = 0;
//             for(int j = i; j < n ; j++){
//                 Sum += nums[j];
//                 Max = max(Sum, Max);
//             }
//         }
//         return Max;
//     }
// };

int main(){
    Solution s1;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout<<s1.maxSubArray(nums)<<endl;
    
    return 0;
}