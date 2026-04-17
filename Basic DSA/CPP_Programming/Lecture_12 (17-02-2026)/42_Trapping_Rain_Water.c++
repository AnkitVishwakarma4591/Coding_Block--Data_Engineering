# include <bits/stdc++.h>
using namespace std;

// Approach 1
// class Solution {
// public:
//     int trap(vector<int>& height) {
//         int n = height.size();
//         int result = 0;
        
//         for(int i = 0 ; i < n ; i++){
//             int leftMax = INT_MIN;
//             for(int j = 0 ; j <= i ; j++){
//                 leftMax = max(leftMax, height[j]);
//             }
//             int rightMax = INT_MIN;
//             for(int j = i ; j < n ; j++){
//                 rightMax = max(rightMax, height[j]);
//             }
//             result += min(leftMax, rightMax) - height[i];
//         }

//         return result;
//     }
// };


// Better Approach
// class Solution {
// public:
//     int trap(vector<int>& height){
//         int n = height.size();
//         vector<int> leftMax(n, 0);
//         vector<int> rightMax(n, 0);

//         leftMax[0] = height[0];
//         rightMax[n-1] = height[n-1];

//         for(int i = 1 ; i < n ; i++){
//             leftMax[i] = max(leftMax[i-1], height[i]);
//         }
//         for(int i = n-2 ; i >= 0 ; i--){
//             rightMax[i] = max(rightMax[i+1], height[i]);
//         }

//         int result = 0;
//         for(int i = 0 ; i < n ; i++){
//             result += min(leftMax[i], rightMax[i]) - height[i];
//         }

//         return result;
//     }
// };

// Optimal Approach
class Solution {
public:
    int trap(vector<int>& height){
        int n = height.size();

        int l = 0 , r = n-1;
        int leftMax = 0;
        int rightMax = 0;

        int ans = 0;

        while(l < r){
            leftMax = max(leftMax,height[l]);
            rightMax = max(rightMax,height[r]);

            if(leftMax < rightMax){
                ans += (leftMax-height[l]);
                l++;
            }else{
                ans += (rightMax - height[r]);
                r--;
            }
        }
        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<s1.trap(height)<<endl;

    return 0;
}