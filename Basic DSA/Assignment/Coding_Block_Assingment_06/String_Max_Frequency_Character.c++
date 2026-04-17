#include<bits/stdc++.h>
using namespace std;

char count_Frequency(string &str){
	int n = str.size();

	unordered_map<char, int> m;
	for(char ch : str){
		m[ch]++;
	}
	pair<char, int> p;
	int Max = 0;
	for(auto val : m){
		if(val.second > Max){
            Max = val.second;
            p = {val.first, val.second};
        }
	}
	return p.first;
}
int main() {
	string str;
	cin>>str;
	cout<<count_Frequency(str)<<endl;

	return 0;
}