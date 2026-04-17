// Q5. Find the Maximum of Three Numbers
# include <iostream>
using namespace std;

int max_three(int a, int b, int c){
    if(a > b && b > c){
        return a;
    }else if(b > a && b > c){
        return b;
    }
    return c;
}

int main(){
    int a,b,c;
    cout<<"Enter 1st no : ";
    cin>>a;
    cout<<"Enter 2nd no : ";
    cin>>b;
    cout<<"Enter 3rd no : ";
    cin>>c;

    cout<<max_three(a,b,c)<<endl;

    return 0;
}