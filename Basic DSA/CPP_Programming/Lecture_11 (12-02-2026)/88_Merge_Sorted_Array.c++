# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        
        int i = 0 , j = 0;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i++]);
            }else{
                ans.push_back(nums2[j++]);
            }
        }

        while(i < m){
            ans.push_back(nums1[i++]);
        }
        while(j < n){
            ans.push_back(nums2[j++]);
        }
        
        nums1 = ans;
    }
};

int main(){
    Solution s1;
    vector<int> nums1 = {1,2,3};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    s1.merge(nums1, m, nums2, n);
    
    return 0;
}