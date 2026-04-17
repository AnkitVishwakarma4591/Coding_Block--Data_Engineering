# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0 , end = n -1;

        while(st <= end){
            int mid = st + (end-st)/2;

            if(nums[mid] == target) return mid;

            if(target < nums[mid]){
                end = mid-1;
            }else{
                st = mid+1;
            }
        }
        return -1;
    }
};

int main(){
    Solution s1;

    vector<int> nums = {-1,0,3,5,9,12};
    int target = 9;

    cout<<s1.search(nums, target)<<endl;

    return 0;
}