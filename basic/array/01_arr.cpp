#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of arr";
    cin>>n;

    int input[100];
    cout<< "enter arra";
    for(int i=0; i<n; i++){
        cin>>input[i];
    }
    cout<<"here is the arr";
    for(int i=0;i<100;i++){
        cout<<input[i];
    }
}