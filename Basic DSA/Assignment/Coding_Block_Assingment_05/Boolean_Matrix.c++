#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Boolean_Matrix(vector<vector<int>> &mat){
    int m = mat.size();
    int n = mat[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    // Step 1: mark rows and columns
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(mat[i][j] == 1){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    // Step 2: update matrix
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            if(row[i] == 1 || col[j] == 1){
                mat[i][j] = 1;
            }
        }
    }

    return mat;
}

int main () {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> mat[i][j];
        }
    }

    vector<vector<int>> result = Boolean_Matrix(mat);

    for(auto &row : result){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}