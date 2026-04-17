# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int  n = nums.size();
        int Sum = 0;

        for(int i = 0 ; i < n ; i++){
            Sum += nums[i];
            nums[i] = Sum ;
        }
        return nums;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {1,2,3,4};

    for(auto val : s1.runningSum(nums)){
        cout<<val<<" ";
    }

    return 0;
}