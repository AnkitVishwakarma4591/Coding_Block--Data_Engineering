# include <iostream>
using namespace std;

bool check_Prime(int n){
    if(n <= 1) return false;
    if(n == 2) return true;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

void prime_factor(int n){
    for(int i = 2; i <= n; i++){
        if(n % i == 0 && check_Prime(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;

    prime_factor(n);

    return 0;
}