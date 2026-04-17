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
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n - i + 1 ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    // second part
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i+1 ; j++){
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