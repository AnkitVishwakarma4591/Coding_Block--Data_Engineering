// Q9. Print the Multiplication Table of 7

# include <iostream>
using namespace std;

void print_Table(int n){
    for(int i = 1 ; i <= 10 ; i++){
        cout<<n<<" * "<<i<<" = "<<(n*i)<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;

    print_Table(n);
    
    return 0;
}