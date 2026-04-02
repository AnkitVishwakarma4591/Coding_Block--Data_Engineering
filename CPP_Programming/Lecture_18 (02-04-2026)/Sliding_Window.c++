# include <bits/stdc++.h>
using namespace std;

int Maximum_Subarray_Sum(vector<int> &nums, int k){
    int n = nums.size();

    int maxSum = 0;
    for(int i = 0 ; i < k ; i++){
        maxSum += nums[i];
    }

    for(int i = k ; i < n ; i++){
        int windowSum = maxSum;
        windowSum += nums[i];
        windowSum -= nums[i-k];

        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    int k;
    cout<<"Enter the size of Window : ";
    cin>>k;

    cout<<"Max Sum of Subarray :"<<Maximum_Subarray_Sum(nums, k)<<endl;
    
    return 0;
}