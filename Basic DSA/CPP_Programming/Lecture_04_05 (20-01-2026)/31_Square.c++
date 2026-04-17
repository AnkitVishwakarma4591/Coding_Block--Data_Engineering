/*
 1  2  3  4  * 
 1  2  3  *  5
 1  2  *  4  5
 1  *  3  4  5
 *  2  3  4  5
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
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