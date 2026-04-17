/*
 *  *  *  *  *  *  *  *  * 
    *  *  *  *  *  *  * 
       *  *  *  *  * 
          *  *  * 
             * 
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"   ";
        }
        for(int j = i ; j < n ; j++){
            cout<<" * ";
        }
        for(int j = i ; j < n - 1 ; j++){
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