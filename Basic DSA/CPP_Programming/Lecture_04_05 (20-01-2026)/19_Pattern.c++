/*
 *  *  *  *  *  *  * 
 *  *  *     *  *  * 
 *  *           *  *  
 *                 *
 *  *           *  *
 *  *  *     *  *  *
 *  *  *  *  *  *  *
*/

# include <iostream>
using namespace std;

/*
void Pattern(int n) {  // n = 7
    for (int i = 0; i < n; i++) {
        int dist = min(i, n - 1 - i);
        if (dist == 0) {
            for (int j = 0; j < n; j++) cout << " * ";
        } else {
            int num_spaces = 2 * dist - 1;
            int num_star = (n - num_spaces) / 2;
            for (int j = 0; j < num_star; j++) cout << " * ";
            for (int j = 0; j < num_spaces; j++) cout << "   ";
            for (int j = 0; j < num_star; j++) cout << " * ";
        }
        cout << endl;
    }
}
*/


void Pattern(int n){
    // first part
    for(int i = 1 ; i <= 2*n-1 ; i++) cout<<" * ";
    cout<<endl;
    for(int i = 1 ; i <= n - 1 ; i++){
        for(int j = 1 ; j <= n - i ; j++){
            cout<<" * ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i-1 ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    // second part
    for(int i = 2 ; i <= n-1 ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        for(int j = 1 ; j <= n - i ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= n -i-1 ; j++){
            cout<<"   ";
        }
        for(int j = 1 ; j <= i ; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i  = 1 ; i <= 2*n-1 ; i++) cout<<" * ";
}

int main(){
    int n = 4;
    Pattern(n);

    return 0;
}

