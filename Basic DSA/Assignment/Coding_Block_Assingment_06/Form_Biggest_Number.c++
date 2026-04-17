#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    return a + b > b + a;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<string> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), cmp);

        // Edge case: all zeros
        if(arr[0] == "0"){
            cout << "0" << endl;
            continue;
        }

        for(auto &x : arr){
            cout << x;
        }
        cout << endl;
    }
}