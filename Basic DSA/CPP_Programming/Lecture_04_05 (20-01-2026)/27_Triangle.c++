/*
             1 
          1  2  1 
       1  2  3  2  1 
    1  2  3  4  3  2  1
 1  2  3  4  5  4  3  2  1
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" "<<j<<" ";
        }
        for(int j = i ; j >= 2 ; j--){
            cout<<" "<<j-1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}