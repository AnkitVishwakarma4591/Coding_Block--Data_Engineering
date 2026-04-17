/*
             1 
          2  3  2 
       3  4  5  4  3 
    4  5  6  7  6  5  4 
 5  6  7  8  9  8  7  6  5 
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        int idx = i;
        for(int j = 1 ; j <= i ; j++){
            cout<<" "<<idx<<" ";
            idx++;
        }
        int temp = idx;
        for(int j = 2 ; j <= i ; j++){
            temp --;
            cout<<" "<<temp-1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}