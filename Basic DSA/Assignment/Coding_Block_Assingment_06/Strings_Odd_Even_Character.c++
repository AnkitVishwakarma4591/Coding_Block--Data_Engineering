#include<bits/stdc++.h>
using namespace std;

string Odd_Even_Character(string &nums){
	int n = nums.size();

	for(int i = 0 ; i < n ; i++){
		if(i % 2 == 0){
			nums[i] = nums[i] + 1;
		}else{
			nums[i] = nums[i] - 1;
		}
	}
	return nums;
}
int main() {
	string nums;
	cin>>nums;

	cout<<Odd_Even_Character(nums)<<endl;
	
	return 0;
}