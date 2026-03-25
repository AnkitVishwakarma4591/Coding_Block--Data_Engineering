#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Transpose_Square_Matrix(vector<vector<int>> &mat){
	int m = mat.size();
	int n = mat[0].size();
	for(int i = 0 ; i < m ; i++){
		for(int j = i ; j < n ; j++){
			swap(mat[i][j], mat[j][i]);
		}
	}

	return mat;
}
int main() {
	int m;
    cin >> m;

    vector<vector<int>> mat(m, vector<int>(m));

    for(int i = 0 ; i < m ; i++){
        for(int j = 0; j < m ; j++){
            cin >> mat[i][j];
        }
    }

	for(auto matrix : Transpose_Square_Matrix(mat)){
		for(int val : matrix){
			cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
}