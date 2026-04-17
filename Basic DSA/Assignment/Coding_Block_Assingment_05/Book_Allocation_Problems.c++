#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool isValid(vector<int> &nums, int n, int m, int maxAllowedPages){
		int stu = 1;
		int pages = 0;
		for(int i = 0 ; i < nums.size() ; i++){
			if(nums[i] > maxAllowedPages) return false;
			if(pages + nums[i] <= maxAllowedPages){
				pages += nums[i];
			}else{
				stu++;
				pages = nums[i];
			}
		}
		return stu <= m ? true : false;
	}
	int Book_Allocation(vector<int> &nums, int n, int m){
		if(m > n) return -1;
		int totalSum = 0;
		for(int val : nums){
			totalSum += val;
		}
		int ans = -1;
		int st = 0, end = totalSum;
		while(st <= end){
			int mid = st + (end - st)/2;
			if(isValid(nums, n, m, mid)){
				ans = mid;
				end = mid - 1;
			}else{
				st = mid + 1;
			}

		}
		return ans;
	}
};
int main() {
	Solution s1;
	int t, n, m;
	cin>>t;
	while(t > 0){
		int n, m;
		cin>>n>>m;
		vector<int> nums(n);
		for(int i = 0 ; i < n ; i++){
			cin>>nums[i];
		}
		cout<<s1.Book_Allocation(nums, n, m)<<endl;
		t--;
	}
	return 0;
}