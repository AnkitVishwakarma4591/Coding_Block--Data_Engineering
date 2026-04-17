/*
 *  4  3  2  1 
 5  *  3  2  1
 5  4  *  2  1 
 5  4  3  *  1
 5  4  3  2  *
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = n ; j >= 1 ; j--){
            if(i + j == n+1){
                cout<<" * ";
            }else{
                cout<<" "<<j<<" ";
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