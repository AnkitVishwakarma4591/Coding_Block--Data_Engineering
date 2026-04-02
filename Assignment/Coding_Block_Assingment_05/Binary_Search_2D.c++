#include<bits/stdc++.h>
using namespace std;

bool Binary_Search(vector<vector<int>> &mat, int m, int n, int target){
    
    for(int i = 0; i < m; i++){
        
        // check if target can be in this row
        if(target >= mat[i][0] && target <= mat[i][n-1]){
            
            int st = 0, end = n-1;
            
            while(st <= end){
                int mid = st + (end - st)/2;
                
                if(mat[i][mid] == target) return true;
                
                else if(target > mat[i][mid]){
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
        }
    }
    
    return false;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    for(int i = 0 ; i < m ; i++){
        for(int j = 0; j < n ; j++){
            cin >> mat[i][j];
        }
    }

    int target;
    cin >> target;

    cout << Binary_Search(mat, m , n, target) << endl;

    return 0;
}