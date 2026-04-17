# include <iostream>
using namespace std;

// int GCD(int a, int b){
//     while(a != b){
//         if(a > b){
//             a -= b;
//         }else{
//             b -= a;
//         }
//     }
//     return a;
// }

// int GCD(int a, int b){
//     int range = min(a,b);
//     int gcd = 1;
//     if(a == 0) return gcd = b;
//     if(b == 0) return gcd = a;
//     if(a == b) return gcd = a;

//     for(int i = 2 ; i <= range ; i++){
//         if(a % i == 0 && b % i == 0){
//             return gcd = i;
//         }
//     }
//     return gcd;
// }

// // Euclids Algorithms
// int GCD(int a, int b){
//     while(a > 0 && b > 0){
//         if(a > b){
//             a = a % b;
//         }else{
//             b = b % a;
//         }
//     }
//     if(a == 0) return b;
//     return a;
// }

// Using Recursion
int GCDRECURSION(int a, int b){
    if(b == 0) return a;

    return GCDRECURSION(b, a%b);
}

int main(){
    int a, b;
    cout<<"Enter first Number :";
    cin>>a;
    cout<<"Enter first Number :";
    cin>>b;

    // cout<<"GCD of Numbers :"<<GCD(a,b)<<endl;
    cout<<"GCD of Numbers :"<<GCDRECURSION(a,b)<<endl;

    return 0;
}