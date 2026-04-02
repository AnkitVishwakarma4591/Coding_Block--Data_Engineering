# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastSeen;
        for (int i = 0; i < nums.size(); i++) {
            if (lastSeen.count(nums[i]) && i - lastSeen[nums[i]] <= k)
                return true;
            lastSeen[nums[i]] = i;
        }
        return false;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {1,2,3,1};
    int k = 3;

    cout<<s1.containsNearbyDuplicate(nums, k)<<endl;

    return 0;
}