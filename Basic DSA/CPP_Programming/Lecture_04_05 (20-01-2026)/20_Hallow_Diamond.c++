/*
             * 
          *     *
       *           *
    *                 *
 *                       *
    *                 *
       *           *
          *     *
             * 
*/

# include <iostream>
using namespace std;

void Diamond(int n){
    // first part
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            if(j == 1 ){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int j = 2 ; j <= i ; j++){
            if(j == i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    // second part
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n-i ; j++){
            if(j == 1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int j = 2 ; j <= n-i ; j++){
            if(j == n-i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    
}

int main(){
    int n = 5;
    Diamond(n);
    return 0;
}