# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {

        int n = nums.size();
        int st = 0 , end = n-1;

        while(st < end){
            if(nums[st] % 2 > nums[end] % 2){
                swap(nums[st],nums[end]);
            }

            if(nums[st] % 2 == 0) st++;
            if(nums[end] % 2 == 1) end--;
        }
        return nums;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {3,1,2,4};

    for(int val : s1.sortArrayByParity(nums)){
        cout<<val<<" ";
    }
    return 0;
}