/*
 *  *  *  *  * 
       *  *  *  *
             *  *  *
                   *  *
                         * 
                   *  *
             *  *  *
       *  *  *  *
 *  *  *  *  *
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    // first part
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2*i ; j++){
            cout<<"   ";
        }
        for(int j = 0 ; j < n - i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    // second part
    for(int i = 2 ; i <= n ; i++){
        for(int j = 1 ; j <= 2*n-i-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}