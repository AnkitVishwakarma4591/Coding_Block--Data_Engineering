# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double windowSum = 0;

        for(int i = 0 ; i < k ; i++){
            windowSum += nums[i];
        }

        double maxSum = windowSum;

        for(int i = k ; i < n ; i++){
            windowSum += nums[i];
            windowSum -= nums[i-k];

            maxSum = max(maxSum, windowSum);
        }
        return maxSum/k;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;

    cout<<s1.findMaxAverage(nums, k)<<endl;
    
    return 0;
}