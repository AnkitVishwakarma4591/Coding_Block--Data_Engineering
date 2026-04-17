# include <iostream>
using namespace std;

int reverse_Num(int n){
    int ans = 0;

    while(n > 0){
        int rem = n % 10;
        n /= 10;
        ans = (ans*10) + rem;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Number :";
    cin>>n;

    cout<<"Number you have enter :"<<n<<endl;
    cout<<"After reverse Number :"<<reverse_Num(n)<<endl;

    return 0;
}