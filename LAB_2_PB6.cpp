/*
6. To find a prime number within a range. 
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are: 
2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,
89,97.
The total number of prime numbers between 1 to 100 is: 25
*/

#include<iostream>
using namespace std;

bool is_prime(int n){
    if(n<2){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
}

int main(){

    int m,n;
    cout<<"Enter range(m~n): ";
    cin>>m>>n;
    int cnt=0;
    for(int i=m;i<=n;i++){
        if(is_prime(i)==true){
            cout<<i<<" ";
            cnt++;
        }
    }
    cout<<endl<<"Number of prime number in range: "<<m<<"~"<<n<<" : is: "<<cnt<<endl;

}