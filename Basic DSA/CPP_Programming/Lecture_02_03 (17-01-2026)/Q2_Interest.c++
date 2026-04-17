// Q2. Simple Interest Calculation

# include <iostream>
using namespace std;

int main(){
    float p, r, t;
    cout<<"Enter Principal :";
    cin>>p;

    cout<<"Enter Rate :";
    cin>>r;

    cout<<"Enter Time :";
    cin>>t;

    cout<<"SI is :"<<((p*r*t)/100)<<endl;

    return 0;
}