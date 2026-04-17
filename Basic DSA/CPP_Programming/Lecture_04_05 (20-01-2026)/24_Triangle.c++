/*
             1 
          2  2  2
       3  3  3  3  3
    4  4  4  4  4  4  4
 5  5  5  5  5  5  5  5  5
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" "<<i<<" ";
        }
        for(int j = 2 ; j <= i ; j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}