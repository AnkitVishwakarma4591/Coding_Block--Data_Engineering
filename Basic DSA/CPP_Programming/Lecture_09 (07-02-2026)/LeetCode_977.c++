# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            ans[i] = nums[i] * nums[i];
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {-4,-1,0,3,10};

    for(int val : s1.sortedSquares(nums)){
        cout<<val<<" ";
    }
    
    return 0;
}