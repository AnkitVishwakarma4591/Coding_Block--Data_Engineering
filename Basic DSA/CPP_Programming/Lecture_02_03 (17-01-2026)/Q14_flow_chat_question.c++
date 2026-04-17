/**
You are given a number n.
You have to determine what the person wins based on the following conditions:
If n >= 300 and n <= 460, the prize is MacBook.
If n >= 200 and n <= 280, the prize is Kurkure.
If n >= 1100 and n <= 1500, the prize is Cycle.
If n > 50 and n <= 80, the prize is Bike.
For all other values of n, print “Better luck next time.
**/

# include <iostream>
using namespace std;

string Prize(int n){
    string prize;
    if(n >= 300 && n <= 460){
        prize = "MacBook";
    }else if(n >= 200 && n <= 280){
        prize = "Kurkure";
    }else if(n >= 1100 && n <= 1500){
        prize = "Cycle";
    }else if(n >= 50 && n <= 80){
        prize = "Bike";
    }else{
        prize = "Better luck next time.";
    }
    return prize;
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;

    cout<<Prize(n)<<endl;

    return 0;
}