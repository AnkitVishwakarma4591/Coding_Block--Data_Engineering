// Q12. Find the Sum of Digits of a Given Number using a Loop
# include <iostream>
using namespace std;

int sum_digit(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    cout<<sum_digit(n)<<endl;

    return 0;

}