// Q6 - Write a C++ program to swap two numbers with the help of a third variable
#include<iostream>
using namespace std;

int main (){
    int num1,num2, num3;
    cout<<"num1"<<endl;
    cin>>num1;
    cout<<"num2"<<endl;
    cin>>num2;
    num3=num2;
    num2=num1;
    num1=num3;
    cout<<"num1  :"<<num1<<endl;
    cout<<"num2  :"<<num2<<endl;

    return 0 ;
}