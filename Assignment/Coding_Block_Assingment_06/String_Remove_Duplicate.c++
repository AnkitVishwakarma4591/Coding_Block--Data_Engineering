#include<bits/stdc++.h>
using namespace std;

string remove_Duplicate(string &nums){
	int n = nums.size();

	string ans;

	for(int i = 0 ; i < n ; i++){
		char start = nums[i];

		while(i+1 < n && nums[i] == nums[i+1]){
			i++;
		}
		char end = nums[i];

		if(start == end){
			ans += start;
		}
	}
	return ans;
}

int main() {
	string nums;
	cin>>nums;

	cout<<remove_Duplicate(nums)<<endl;
	
	return 0;
}