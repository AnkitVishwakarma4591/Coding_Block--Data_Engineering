/*
             * 
          *  !  *
       *  !  *  !  *
    *  !  *  !  *  !  *
 *  !  *  !  *  !  *  !  *
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            if(j%2 != 0){
                cout<<" * ";
            }else{
                cout<<" ! ";
            }
        }
        for(int j = 2 ; j <= i ; j++){
            if((i+j)%2 != 0){
                cout<<" ! ";
            }else{
                cout<<" * ";
            }
        } 
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}