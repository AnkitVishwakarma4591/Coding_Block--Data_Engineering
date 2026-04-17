#include<bits/stdc++.h>
using namespace std;

string Compression(string &nums){
	int n = nums.size();
	string ans;
	
	int l = 0, r = 0;
	for(int i = 0 ; i < n ; i++){
		char check = nums[i];
		int cnt = 1;
		while(i+1 < n && nums[i] == nums[i+1]){
			cnt++;
			i++;
		}
		if(cnt == 1){
			ans += nums[i];
		}else{
			ans += nums[i];
			ans += to_string(cnt);
		}
	}
	return ans;
}
int main() {
	string nums;
	cin>>nums;

	cout<<Compression(nums)<<endl;
	
	return 0;
}