#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Uppar_Matrix(vector<vector<int>> &mat){
	int m = mat.size();
	int n = mat[0].size();

	vector<vector<int>> result(m, vector<int>(n,0));

	for(int i = 0 ; i < m ; i++){
		for(int j = i ; j < n ; j++){
			result[i][j] = mat[i][j];
		}
	}

    return result;
}

int main () {
    int m;
    cin >> m;

    vector<vector<int>> mat(m, vector<int>(m));

    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> mat[i][j];
        }
    }


    for(auto &row : Uppar_Matrix(mat)){
        for(int val : row){
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}