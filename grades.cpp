//WAP to print the grades of students according to thier marks.
#include<iostream>
using namespace std;
int main(){
    cout<<"***Students Details***"<<endl;
    int marks;
    cout<<"Enter your marks : ";
    cin>>marks;
    if(marks>=80 && marks<=100){
        cout<<"A";
    }else if(marks>=60 && marks<80){
        cout<<"B";
    }else if(marks>=30 && marks<60){
        cout<<"C";
    }else if(marks>=0 && marks<30){
        cout<<"Failed";
    }else{
        cout<<"Please enter a valid marks......!";
    }

    return 0;
}