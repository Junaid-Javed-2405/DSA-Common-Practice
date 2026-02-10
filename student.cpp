#include<iostream>
#include"student.h"

using namespace std;

student::student(){
    name="Unknown";
    age=0;
    fees=00;
}
student:: student(string s , int a ,int f){
        name=s;
        age=a;
        fees=f;
    }  

void student::setData(string n,int a,int f){
    name=n;
    age=a;
    fees=f;
}

void student::setFees(int f){
    fees=f;
}
void student::showData(){
    cout<<"Name: "<<name<<"\t Age: "<<age<<"\t Fees: "<<fees<<endl;
}
