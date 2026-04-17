#include<bits/stdc++.h>
using namespace std;

string isPalindrome(string &str){
	int n = str.size();
	int st = 0 , end = n-1;
	while(st < end){
		if(str[st] != str[end]){
			return "false";
		}
		st++;
		end--;
	}
	return "true";
}
int main() {
	string str;
	cin>>str;

	cout<<isPalindrome(str)<<endl;

	return 0;
}