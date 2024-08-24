/*
2. To print Floyd’s Triangle:
0
01
101
0101
10101
*/
#include<iostream>
using namespace std;

int main(){

    cout<<"Enter Number of line: ";
    int n;cin>>n;
    int initial=1;
    for(int i=1;i<=n;i++){
         if(i%2==0){
                initial=0;
            }
            else{
                initial=1;
            }
        for(int j=1;j<=i;j++){
            if(i==1){
                cout<<0;
            }
           else if(initial==0){
            cout<<initial<<" ";
            initial=1;
           }
           else{
            cout<<initial<<" ";
            initial=0;
           }
        }
        cout<<endl;
    }
}