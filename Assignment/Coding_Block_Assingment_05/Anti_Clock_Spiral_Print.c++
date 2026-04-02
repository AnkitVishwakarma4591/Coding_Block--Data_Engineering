#include<bits/stdc++.h>
using namespace std;

vector<int> Anti_Clock_Spiral_Print(vector<vector<int>> &nums){
	int m = nums.size();
	int n = nums[0].size();

	vector<int> result;

	int top = 0, bottom = m-1;
	int left = 0, right = n-1;

	while(top <= bottom && left <= right){
		for(int i = top ; i <= bottom ; i++){
			result.push_back(nums[i][left]);
		}
		left++;
		for(int i = left ; i <= right ; i++){
			result.push_back(nums[bottom][i]);
		}
		bottom--;
		if(left <= right){
			for(int i = bottom ; i >= top ; i--){
				result.push_back(nums[i][right]);
			}
			right--;
		}
		if(top <= bottom){
			for(int i = right ; i >= left ; i--){
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

	for(int val : Anti_Clock_Spiral_Print(nums)){
		cout<<val<<", ";
	}
	cout<<"END";

	return 0;
}