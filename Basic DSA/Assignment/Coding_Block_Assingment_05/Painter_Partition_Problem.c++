#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isPossible(vector<int> &nums, int n, int m, long long maxAllowed){
        int painter = 1;
        long long time = 0;

        for(int i = 0 ; i < n ; i++){
            
            if(nums[i] > maxAllowed) return false;

            if(time + nums[i] <= maxAllowed){
                time += nums[i];
            }else{
                painter++;
                time = nums[i];
            }
        }
        return painter <= m;
    }
    
    long long Painter_Partition(vector<int> &nums, int n, int m){
        long long totalRange = 0, maxVal = INT_MIN;

        for(int val : nums){
            totalRange += val;
            maxVal = max(maxVal, (long long)val);
        }

        long long st = maxVal, end = totalRange;
        long long ans = -1;

        while(st <= end){
            long long mid = st + (end - st)/2;

            if(isPossible(nums, n, m, mid)){
                ans = mid;
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }
        return ans;
    }
};

int main() {
    Solution s1;
    int k, n;
    cin >> k >> n;

    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin >> nums[i];
    }

    cout << s1.Painter_Partition(nums, n, k) << endl;

    return 0;
}