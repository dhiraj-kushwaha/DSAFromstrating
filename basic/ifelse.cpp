#include<iostream>
using namespace std;

int main(){
    int grade;
    cout << "enter the grades";
    cin >> grade;

    if(grade<25){
        cout<<"F";
    }
    else if (grade >= 25 && grade<=44)
    {
       cout<<"E";
    }
    else if (grade>=44 && grade<=49){
        cout<<"D";
    }
    else if(grade>=50 && grade<=59){
        cout<<"C ";
    }
    else if(grade>=60 && grade<=79){
        cout<<"B";
    }
    else if (grade>=80 && grade<=100)
    {
        cout<<"A";
    }
    
   
    
}