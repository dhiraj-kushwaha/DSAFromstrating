#include<iostream>
using namespace std;

int main(){
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 

    int add=arr[0];

    for(int i=1;i<n;i++){
        add=add+arr[i];
    }
    cout<<add;
    
}


