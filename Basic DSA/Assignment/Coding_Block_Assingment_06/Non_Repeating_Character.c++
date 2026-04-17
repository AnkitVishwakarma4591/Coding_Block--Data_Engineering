#include <bits/stdc++.h>
using namespace std;

char non_repeating_char(string &nums){
    unordered_map<char, int> m;

    for(char ch : nums){
        m[ch]++;
    }

    for(char ch : nums){
        if(m[ch] == 1){
            return ch;
        }
    }

    return '#';
}

int main() {
    int n;
    cin >> n;

    while(n > 0){
        string nums;
        cin >> nums;
		char ans = non_repeating_char(nums);
        if(ans == '#'){
			cout<<-1<<endl;
		}else{
			cout<<ans<<endl;
		}
		n--;
    }

    return 0;
}