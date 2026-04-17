# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // vector<int> sortArray(vector<int>& nums) {
    //     // Bubble Sort
    //     int n = nums.size();

    //     // for(int i = 0 ; i < n ; i++){
    //     //     bool isSwap = false;
    //     //     for(int j = 0 ; j < n-1-i ; j++){
    //     //         if(nums[j] > nums[j+1]){
    //     //             swap(nums[j], nums[j+1]);
    //     //             isSwap = true;
    //     //         }
    //     //     }
    //     //     if(!isSwap){
    //     //         return nums;
    //     //     }
    //     // }
    //     // return nums;

    //     // Insertion Sort
    //     // for(int i = 0 ; i < n ; i++){
    //     //     int curr = nums[i];
    //     //     int prev = i-1;

    //     //     while(prev >= 0 && nums[prev] > curr){
    //     //         nums[prev+1] = nums[prev];
    //     //         prev--;
    //     //     }
    //     //     nums[prev+1] = curr;
    //     // }
    //     // return nums;

    //     Selection Sort
    //     for(int i = 0 ; i < n-1 ; i++){
    //         int small_idx = i;
    //         for(int j = i+1 ; j < n ; j++){
    //             if(nums[j] < nums[small_idx]){
    //                 small_idx = j;
    //             }
    //         }
    //         swap(nums[i], nums[small_idx]);
    //     }
    //     return nums;     
    // }
    void Merge(vector<int> &nums, int st, int mid, int end){
        vector<int> temp;
        int i = st, j = mid+1;

        while(i <= mid && j <= end){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i++]);
            }else{
                temp.push_back(nums[j++]);
            }
        }
        while(i <= mid){
            temp.push_back(nums[i++]);
        }
        while(j <= end){
            temp.push_back(nums[j++]);
        }
        for(int idx = 0 ; idx < temp.size(); idx++){
            nums[idx+st] = temp[idx];
        }
    }
    void MergeSort(vector<int> &nums, int st, int end){
        if(st < end){
            int mid = st + (end - st)/2;

            // left Part
            MergeSort(nums, st, mid);
            // Right Part
            MergeSort(nums, mid+1, end);

            Merge(nums, st, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums){
        MergeSort(nums, 0, nums.size()-1);

        return nums;
    }
};

int main(){
    Solution s1;

    vector<int> nums = {5,1,1,2,0,0};

    for(int val : s1.sortArray(nums)){
        cout<<val<<" ";
    }

    return 0;
}