#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Row_wise_Sort_Matrix(vector<vector<int>> &mat){
	int m = mat.size();
	int n = mat[0].size();

	vector<vector<int>> result;

	for(int i = 0 ; i < m ; i++){
		sort(mat[i].begin(), mat[i].end());
		result.push_back(mat[i]);
	}

	return result;
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

	for(auto mat : Row_wise_Sort_Matrix(mat)){
		for(int val : mat){
			cout<<val<<" ";
		}
		cout<<endl;
	}

	return 0;
}