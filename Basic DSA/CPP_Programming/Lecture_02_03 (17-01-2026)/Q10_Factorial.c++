// Q10. Find the Factorial of a Number
# include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n ;
    cout<<"Enter number : ";
    cin>>n;

    cout<<factorial(n)<<endl;
    
    return 0;
}