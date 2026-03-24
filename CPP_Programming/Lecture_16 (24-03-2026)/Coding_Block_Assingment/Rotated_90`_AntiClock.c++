#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Rotated_AntiClock(vector<vector<int>> &mat){
	int m = mat.size();
	int n = mat[0].size();

	// step :- 1 find tranpose 
	for(int i = 0 ; i < m ; i++){
		for(int j = i ; j < n ; j++){
			swap(mat[i][j], mat[j][i]);
		}
	}
	// step :- reverse col
	int top = 0, bottom = m-1;
	while(top < bottom){
		swap(mat[top], mat[bottom]);
		top++;
		bottom--;
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

	for(auto matrix : Rotated_AntiClock(mat)){
		for(int val : matrix){
			cout<<val<<" ";
		}
		cout<<endl;
	}
	return 0;
}