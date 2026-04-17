# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        return nums[n-k];
    }
};

int main(){
    Solution s1;
    vector<int> nums = {3,2,1,5,6,4};
    int k = 2;

    cout<<s1.findKthLargest(nums,k)<<endl;
    
    return 0;
}