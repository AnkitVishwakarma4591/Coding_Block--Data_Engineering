# include <bits/stdc++.h>
using namespace std;

bool Check_Palindrome(string str){
    string temp = str;
    reverse(temp.begin(), temp.end());

    return str == temp;
}

int main(){
    string str;
    cin>>str;

    cout<<Check_Palindrome(str)<<endl;
    
    return 0;
}