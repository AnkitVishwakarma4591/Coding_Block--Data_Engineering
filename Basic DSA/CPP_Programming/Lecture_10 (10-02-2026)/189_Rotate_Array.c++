# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // TLE
        // int n = nums.size();
        // k = k % n;
        // vector<int> ans(n);
        // while(k > 0){
        //     ans[0] = nums[n-1];
        //     for(int i = 0 ; i < n-1 ; i++){
        //         ans[i+1] = nums[i];
        //     }
        //     nums = ans;
        //     k--;
        // }

        int n = nums.size();
        k = k % n;
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            ans[(i+k)%n] = nums[i];
        }
        nums = ans;
    }
};

int main(){
    Solution s1;
    vector<int>  nums = {1,2,3,4,5,6,7};
    int k = 3;
    s1.rotate(nums, k);

    return 0;
}