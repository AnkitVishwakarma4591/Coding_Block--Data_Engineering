# include <bits/stdc++.h>
using namespace std;

void insertion_Sort(vector<int> nums){
    int n = nums.size();

    for(int i = 0 ; i < n ; i++){
        int curr = nums[i];
        int prev = i-1;
        while(prev >= 0 && nums[prev] > curr){
            nums[prev+1] = nums[prev];
            prev--;
        }
        nums[prev+1] = curr;
    }
}

int main(){
    vector<int> nums = {5,2,4,0,6};

    insertion_Sort(nums);

    return 0;
}