#include<bits/stdc++.h>
using namespace std;

void Max_Col_Sum(vector<vector<int>> &nums){
	int n = nums.size();
	int maxCount = INT_MIN;
	int idx = -1;

	for(int i = 0 ; i < n ; i++){
		int CurrSum = 0;
		for(int j = n-1 ; j >= 0 ; j--){
			CurrSum += nums[j][i];
		}
		if(CurrSum > maxCount){
			maxCount = CurrSum;
			idx = i;
		}
	}
	cout<<idx+1<<" "<<maxCount<<endl;
}
int main () {
	int n;
	cin>>n;
	vector<vector<int>> nums(n, vector<int>(n));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin>>nums[i][j];
		}
	}
	Max_Col_Sum(nums);

	return 0;
}