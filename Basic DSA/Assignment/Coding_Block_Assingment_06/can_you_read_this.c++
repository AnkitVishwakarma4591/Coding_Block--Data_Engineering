#include<bits/stdc++.h>
using namespace std;

void read_Sentence(string &sentence){
	int n = sentence.size();

	for(int i = 0 ; i < n ; i++){
		string ans = "";
		ans += sentence[i];
		int st = i+1;
		while(st < n && islower(sentence[st])){
			ans += sentence[st];
			st++;
		}
		i = st-1;
		cout<<ans<<endl;
	}
	
}
int main() {
	string sentence;
	cin>>sentence;
// IAmACompetitiveProgrammer
	read_Sentence(sentence);

	return 0;
}