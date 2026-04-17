// Q7. Print Counting from 1 to N
# include <iostream>
using namespace std;

void print_Num(int n){
    for(int i = 1 ; i <= n ; i++){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    print_Num(n);

    return 0;
}