#include<bits/stdc++.h>
using namespace std;

string Toggle_case(string &str){
	int n = str.size();
	
	for(int i = 0 ; i < n ; i++){
		if(islower(str[i])){
			str[i] = toupper(str[i]);
		}else{
			str[i] = tolower(str[i]);
		}
	}
	return str;
}
int main() {
	string str;
	cin>>str;

	cout<<Toggle_case(str)<<endl;
	
	return 0;
}