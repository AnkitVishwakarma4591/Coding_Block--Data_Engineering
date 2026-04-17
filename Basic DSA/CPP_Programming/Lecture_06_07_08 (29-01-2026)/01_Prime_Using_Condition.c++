# include <iostream>
using namespace std;

bool check_for_Prime(int n){
    int cnt = 0;
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
        return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        bool ans = check_for_Prime(i);

        if(ans && i % 3 != 0){
            cout<<i<<" ";
        }
    }
    return 0;
}