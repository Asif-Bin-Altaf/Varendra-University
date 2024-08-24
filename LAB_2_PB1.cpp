/*
1. To print the following pattern till n number of user input:
1
22
333
4444
*/

#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Number of line: ";
    int n;cin>>n;
    int initial=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=initial;j++){
            cout<<initial<<" ";
        }
        initial++;
        cout<<endl;
    }
}