/*
                            0 
                         9  0  9
                      8  9  0  9  8 
                   7  8  9  0  9  8  7
                6  7  8  9  0  9  8  7  6
             5  6  7  8  9  0  9  8  7  6  5
          4  5  6  7  8  9  0  9  8  7  6  5  4
       3  4  5  6  7  8  9  0  9  8  7  6  5  4  3 
    2  3  4  5  6  7  8  9  0  9  8  7  6  5  4  3  2
 1  2  3  4  5  6  7  8  9  0  9  8  7  6  5  4  3  2  1
*/

# include <iostream>
using namespace std;

void Pattern(int n){
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"   ";
        }
        for(int j = n-i ; j <= n-1 ; j++){
            if(j == n-1){
                cout<<" 0 ";
            }else{
                cout<<" "<<j+1<<" ";
            }
        }
        for(int j = 2 ; j <= i ; j++){
            cout<<" "<<n-j+1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n = 10;
    Pattern(n);
    return 0;
}