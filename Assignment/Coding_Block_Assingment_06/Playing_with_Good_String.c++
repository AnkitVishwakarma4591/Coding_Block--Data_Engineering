#include<bits/stdc++.h>
using namespace std;

int Good_String(string &nums){
	int n = nums.size();

	set<char> s = {'a','e','i','o','u'};

	int longest = 0;

	for(int i = 0 ; i < n ; i++){

		if(s.count(nums[i]) == 1){
			int l = i;
			int r = i;
			while(r < n && s.count(nums[r])){
				r++;
			}
			longest = max(longest, r-l);
			i = r;
		}
	}
	return longest;
}
int main() {
	string nums;
	cin>>nums;

	cout<<Good_String(nums)<<endl;

	return 0;
}