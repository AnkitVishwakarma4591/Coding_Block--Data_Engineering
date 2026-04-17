# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();

        int low = 0, mid = 0, high = n-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }else{
                mid++;
            }
        }
    }
};

int main(){
    Solution s1;
    vector<int> nums = {2,0,2,1,1,0};

    s1.sortColors(nums);
    for(int val : nums){
        cout<<val<<" ";
    }
    return 0;
}