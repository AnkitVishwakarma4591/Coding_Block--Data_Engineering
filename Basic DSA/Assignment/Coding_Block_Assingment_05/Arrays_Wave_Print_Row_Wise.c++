#include<bits/stdc++.h>
using namespace std;

vector<int> Wave_Print(vector<vector<int>> &nums){
	int m = nums.size();
	int n = nums[0].size();

	vector<int> result;

	int top = 0, bottom = m-1;
	int left = 0, right = n-1;

	while(top <= bottom){
		for(int i = left ; i <= right ; i++){
			result.push_back(nums[top][i]);
		}
		top++;
		if(top <= bottom){
			for(int i = right ; i >= 0 ; i--){
				result.push_back(nums[top][i]);
			}
			top++;
		}
	}
	return result;
}
int main() {
	int m, n;
	cin>>m>>n;

	vector<vector<int>> nums(m, vector<int>(n));

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			cin>>nums[i][j];
		}
		cout<<endl;
	}

	for(int val : Wave_Print(nums)){
		cout<<val<<", ";
	}
	cout<<"END";

	return 0;
}