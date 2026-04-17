/*
             * 
          *  *
       *  *  *
    *  *  *  *
 *  *  *  *  *
    *  *  *  *
       *  *  *
          *  *
             *
*/

# include <iostream>
using namespace std;

void Triangle(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n = 5;
    Triangle(n);
    return 0;
}