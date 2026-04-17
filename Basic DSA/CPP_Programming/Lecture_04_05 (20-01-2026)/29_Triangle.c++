/*
             1 
          2  0  2 
       3  0  0  0  3 
    4  0  0  0  0  0  4 
 5  0  0  0  0  0  0  0  5 
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            if(j == 1){
                cout<<" "<<i<<" ";
            }else{
                cout<<" "<<0<<" ";
            }
            
        }
        for(int j = 2 ; j <= i ; j++){
            if(j == i){
                cout<<" "<<i<<" ";
            }else{
                cout<<" "<<0<<" ";
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