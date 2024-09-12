#include<iostream>
using namespace std;

void exchange(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int arr[],int p,int r){
    int pivot=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            exchange(&arr[i],&arr[j]);
        }
    }
    exchange(&arr[i+1],&arr[r]);
    return i+1;
}

void quick_Sort(int arr[],int p,int r){
    if(p<r){
        int pivot=partition(arr,p,r);
        quick_Sort(arr,p,pivot-1);
        quick_Sort(arr,pivot+1,r);

    }
}

int main(){
    cout<<"Number of elements: ";int n;cin>>n;
    int arr[n];
    cout<<"Enter array elements....\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quick_Sort(arr,0,n-1);

    cout<<"Elements after sort....\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}