/*
 *  *  *  *  * 
    *  *  *  *
       *  *  *
          *  *
             *
*/

# include <iostream>
using namespace std;

void RightAngle(int n){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < i ; j++){
            cout<<"   ";
        }
        for(int j = i ; j < n ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    RightAngle(n);
    return 0;
}