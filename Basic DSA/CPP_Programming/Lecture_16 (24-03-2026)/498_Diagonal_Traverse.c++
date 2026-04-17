# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<int> ans;
        int i = 0, j = 0;
        int dir = 1;

        for(int k = 0 ; k < m*n ; k++){
            ans.push_back(mat[i][j]);

            if(dir == 1){
                if(j == n-1){
                    i++;
                    dir = 0;
                }else if(i == 0){
                    j++;
                    dir = 0;
                }else{
                    i--;
                    j++;
                }
            }else{
                if(i == m-1){
                    j++;
                    dir = 1;
                }else if(j == 0){
                    i++;
                    dir = 1;
                }else{
                    i++;
                    j--;
                }
            }
        }
        return ans;
    }
};

int main(){
    Solution s1;
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    for(int val : s1.findDiagonalOrder(mat)){
        cout<<val<<" ";
    }
    return 0;
}