// Q4. Find the Maximum of Two Numbers
# include <iostream>
using namespace std;

int max_two(int a, int b){
    if(a > b){
        return a;
    }
    return b;
}

int main(){
    int a,b;
    cout<<"Enter first no : ";
    cin>>a;
    cout<<"Enter Second no : ";
    cin>>b;

    cout<<max_two(a,b)<<endl;
    
    return 0;
}