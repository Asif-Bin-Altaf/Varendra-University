/*
5. For a given set of non-negative integers and a value sum, the task 
is to check if there is a subset of the given set whose sum is equal 
to the given sum.
Example: 
Input set[] = {5, 129, 6, 10, 45, 7, 9},
Sum = 11
Output: True (Explanation: There is a subset {5,6} with sum 11)
Input set[] = {5, 129, 6, 10, 45, 7, 9},
Sum = 450
Output: False (Explanation: There is no such subset with sum 450)
*/
#include<iostream>
using namespace std;

int main(){
    cout<<"Enter number of element in your set: ";
    int n;cin>>n;
    int arr[n];
    cout<<"Enter elements...\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter sum of two number: ";//here we consider subset must have 2 element.
    int sum;cin>>sum;
    int x,y;
    bool flag=false;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                x=arr[i],y=arr[j];
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"True\nThose two number are: "<<x<<" and "<<y<<endl;
    }
    else{
        cout<<"False\nThere was'nt any two number which sum is equal to "<<sum;
    }
}