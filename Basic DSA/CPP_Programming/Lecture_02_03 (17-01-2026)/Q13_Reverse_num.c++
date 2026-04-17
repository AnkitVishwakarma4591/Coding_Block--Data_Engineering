// Q13. Reverse a Number using a While Loop
# include <iostream>
using namespace std;

int reverse_num(int n){
    int ans = 0;
    while(n > 0){
        int rem = n % 10;
        ans = (10 * ans) + rem;
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    cout<<reverse_num(n)<<endl;

    return 0;
}