/*
3. To read a matrix of size m*n from the keyboard and display the 
same on the screen using function.
*/

#include<iostream>
using namespace std;

int matrix[100][100];

void print_matrix(int r,int c){

    cout<<"Printing Matrix..."<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    cout<<"Enter number of row: ";
    int r;cin>>r;
    cout<<"Enter Number of column: ";
    int c;cin>>c;
    cout<<"Enter matrix values....\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    print_matrix(r,c);
}