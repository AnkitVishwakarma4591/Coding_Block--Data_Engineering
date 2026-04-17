/*
 *  *  *     *  *  * 
 *  *           *  *
 *                 * 

 *                 *
 *  *           *  *
 *  *  *     *  *  *
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    // first part
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" * ";
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    
    // second part
    for(int i = 1 ; i <= n-1 ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        for(int j = 1 ; j <= 2*(n-1)-(2*i)+1 ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 4;
    Pattern(n);

    return 0;
}