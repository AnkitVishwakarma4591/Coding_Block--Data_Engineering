/*
 *  *  *  *  * 
 *           * 
 *           * 
 *           * 
 *  *  *  *  * 
*/

# include <iostream>
using namespace std;

void Hallow_Rectangle(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(i == 1 || j == 1 || i == n || j == n){
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
    Hallow_Rectangle(n);
    return 0;
}