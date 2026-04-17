#include <bits/stdc++.h>
using namespace std;

int solve(string &s, int k, char target){
    int i = 0, j = 0;
    int cnt = 0; // count of chars to change
    int ans = 0;

    while(j < s.size()){
        if(s[j] != target) cnt++;

        while(cnt > k){
            if(s[i] != target) cnt--;
            i++;
        }

        ans = max(ans, j - i + 1);
        j++;
    }
    return ans;
}

int main(){
    int k;
    cin >> k;
    string s;
    cin >> s;

    int ans = max(solve(s, k, 'a'), solve(s, k, 'b'));
    cout << ans;
}