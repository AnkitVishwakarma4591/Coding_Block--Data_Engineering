#include<bits/stdc++.h>
using namespace std;

string string_difference(string &str){
	string ans;
	int n = str.size();
	for(int i = 1 ; i < n ; i++){
		if(!ans.empty()){
			ans.pop_back();
		}
		int val = str[i] - str[i-1];
		ans += str[i-1];
		ans += to_string(val);
		ans += str[i];
	}
	return ans;
}
int main() {
	string str;
	cin>>str;

	cout<<string_difference(str)<<endl;

	return 0;
}