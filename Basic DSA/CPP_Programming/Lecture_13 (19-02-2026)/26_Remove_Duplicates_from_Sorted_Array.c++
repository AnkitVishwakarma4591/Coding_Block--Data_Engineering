# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n == 0) return 0;
        int curr = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] != nums[curr]){
                curr++;
                nums[curr] = nums[i];
            }
        }
        return curr+1;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout<<s1.removeDuplicates(nums)<<endl;

    return 0;
}