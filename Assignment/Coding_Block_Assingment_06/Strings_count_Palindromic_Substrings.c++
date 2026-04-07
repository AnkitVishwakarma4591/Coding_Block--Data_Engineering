#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool isPalindrome(string &temp){
		int n = temp.size();
		int st = 0, end = n-1;

		while(st < end){
			if(temp[st] != temp[end]) return false;
			st++;
			end--;
		}
		return true;
	}
	int count_Substring(string &nums){
		int n = nums.size();
		int cnt = 0;
		for(int i = 0 ; i < n ; i++){
			string temp = "";
			for(int j = i ; j < n ; j++){
				temp += nums[j];
				if(isPalindrome(temp)){
					cnt++;
				}
			}
		}
		return cnt;
	}
};
int main() {
	Solution s1;
	string nums;
	cin>>nums;

	cout<<s1.count_Substring(nums)<<endl;

	return 0;
}