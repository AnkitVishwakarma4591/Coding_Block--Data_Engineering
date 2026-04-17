# include <bits/stdc++.h>
using namespace std;

void Selection_Sort(vector<int> &nums){
    int n = nums.size();

    for(int i = 0 ; i < n-1 ; i++){
        int small_idx = i;
        for(int j = i+1 ; j < n ; j++){
            if(nums[j] < nums[small_idx]){
                small_idx = j;
            }
        }
        swap(nums[i], nums[small_idx]);
    }
}

int main(){
    vector<int> nums = {5,6,7,9,2,1};

    Selection_Sort(nums);

    return 0;
}