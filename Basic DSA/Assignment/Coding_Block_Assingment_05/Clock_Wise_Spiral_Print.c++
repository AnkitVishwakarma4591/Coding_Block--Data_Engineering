#include<bits/stdc++.h>
using namespace std;

vector<int> Spiral_Matrix(vector<vector<int>> &mat){
	int m = mat.size();
	int n = mat[0].size();

	int left = 0, right = n-1;
	int top = 0, bottom = m-1;

	vector<int> result;

	while(left <= right && top <= bottom){
		for(int i = left ; i <= right ; i++){
			result.push_back(mat[top][i]);
		}
		top++;
		for(int i = top ; i <= bottom ; i++){
			result.push_back(mat[i][right]);
		}
		right--;

		if(top <= bottom){
			for(int i = right ; i >= left ; i--){
				result.push_back(mat[bottom][i]);
			}
			bottom--;
		}
		if(left <= right){
			for(int i = bottom ; i >= top ; i--){
				result.push_back(mat[i][left]);
			}
			left++;
		}
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

	for(auto val : Spiral_Matrix(mat)){
			cout<<val<<", ";
	}
	cout<<"END";
	return 0;
}