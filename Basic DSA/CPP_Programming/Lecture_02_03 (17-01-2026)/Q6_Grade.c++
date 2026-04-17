// Q6. Grade Card Program (Based on Marks)
# include <iostream>
using namespace std;


string Grade(int marks){
    string grade;
    if(marks >= 90){
        grade = "A+";
    }else if(marks >= 75 && marks < 90){
        grade = "A";
    }else if(marks >= 60 && marks < 75){
        grade = "B";
    }else if(marks >= 45 && marks < 60){
        grade = "C";
    }else{
        grade = "D";
    }
    return grade;
}

int main(){
    int marks;
    cout<<"Enter Marks :";
    cin>>marks;

    cout<<Grade(marks)<<endl;

    return 0;
}