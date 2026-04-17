// Q3. Check Whether a Number is Odd or Even

# include <iostream>
using namespace std;

string Odd_Even(int a){
    if(a % 2 == 0){
        return "Even";
    }
    return "Odd";
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    cout<<Odd_Even(n)<<endl;
    
    return 0;
}