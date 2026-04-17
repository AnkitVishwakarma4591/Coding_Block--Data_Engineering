#include<bits/stdc++.h>
using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29};

bool isCB(long long num){
    if(num == 0 || num == 1) return false;

    // check if directly prime
    for(int p : primes){
        if(num == p) return true;
    }

    // check divisibility
    for(int p : primes){
        if(num % p == 0) return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<bool> visited(n, false);
    int count = 0;

    // length of substring
    for(int len = 1; len <= n; len++){
        for(int i = 0; i + len <= n; i++){
            int j = i + len - 1;

            // substring → number
            long long num = stoll(s.substr(i, len));

            if(isCB(num)){
                // check overlap
                bool valid = true;
                for(int k = i; k <= j; k++){
                    if(visited[k]){
                        valid = false;
                        break;
                    }
                }

                if(valid){
                    count++;

                    // mark visited
                    for(int k = i; k <= j; k++){
                        visited[k] = true;
                    }
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}