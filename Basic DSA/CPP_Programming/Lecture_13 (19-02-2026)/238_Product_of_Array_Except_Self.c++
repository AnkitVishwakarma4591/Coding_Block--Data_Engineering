# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums){
        int n = nums.size();
        vector<int> leftProduct(n);

        leftProduct[0] = 1;
        for(int i = 1 ; i < n ; i++){
            leftProduct[i] = leftProduct[i-1] * nums[i-1];
        }

        long long right = 1;
        for(int i = n-1; i >= 0; i--) {
            leftProduct[i] *= right;
            right *= nums[i];
        }
        return leftProduct;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {1,2,3,4};

    for(int val : s1.productExceptSelf(nums)){
        cout<<val<<" ";
    }
    return 0;
}