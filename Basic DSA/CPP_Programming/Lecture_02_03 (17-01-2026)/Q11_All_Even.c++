// Q11. Print All Even Numbers from 1 to 100 using a Loop
# include <iostream>
using namespace std;

void print_Even(int n){
    for(int i = 1 ; i <= n ; i++){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    print_Even(n);

    return 0;
}