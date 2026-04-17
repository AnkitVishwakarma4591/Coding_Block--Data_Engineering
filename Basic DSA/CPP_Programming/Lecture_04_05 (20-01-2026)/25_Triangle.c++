/*
             1 
          2  3   4 
       5  6  7   8   9 
    10   11  12  13  14  15  16 
 17  18  19  20  21  22  23  24  25 
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    int idx = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" "<<idx<<" ";
            idx++;
        }
        for(int j = 2 ; j <= i ; j++){
            cout<<" "<<idx<<" ";
            idx++;
        }
        cout<<endl;
    }
}

int main(){
    int n = 5;
    Pattern(n);
    return 0;
}