# include <iostream>
# include <bits/stdc++.h>
using namespace std;

void Bubble_Sort(vector<int> &nums){
    int n = nums.size();
    for(int i = 0 ; i < n ; i++){
        bool isSwap = false;
        for(int j = 0 ; j < n-1-i ; j++){
            if(nums[j] > nums[j+1]){
                swap(nums[j], nums[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}

int main(){
    vector<int> nums = {5,6,7,2,1};

    Bubble_Sort(nums);

    return 0;
}