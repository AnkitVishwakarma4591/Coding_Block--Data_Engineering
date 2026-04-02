#include<bits/stdc++.h>
using namespace std;

bool isLower_Triangle(vector<vector<int>> &nums){
	int m = nums.size();
	int n = nums[0].size();

	vector<vector<int>> result(m, vector<int>(n,0));

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j <= i ; j++){
			result[i][j] = nums[i][j];
		}
	}
	return result == nums;
}
int main () {
	int m;
	cin>>m;
	vector<vector<int>> nums(m, vector<int>(m));

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < m ; j++){
			cin>>nums[i][j];
		}
	}

	if(isLower_Triangle(nums)){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	return 0;
}