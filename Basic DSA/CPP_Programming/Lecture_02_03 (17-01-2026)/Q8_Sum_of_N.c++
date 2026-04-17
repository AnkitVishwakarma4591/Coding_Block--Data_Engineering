// Q8. Find the Sum of N Natural Numbers
# include <iostream>
using namespace std;

int Sum_of_n(int n){
    int sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    cout<<Sum_of_n(n)<<endl;
    
    return 0;
}