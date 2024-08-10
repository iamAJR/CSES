#include <bits/stdc++.h>
using namespace std;
//din get
bool check(int *arr, int n){
     for(int i=1;i<n;i++){
        if(abs(arr[i-1]-arr[i])==1)
                return false;
    }
    
        return true;
}

void print(int* arr, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){

    int n;
    cin>>n;
    int arr[n];
    if(n==1)
        cout<<"NO SOLUTION";
    for(int i=0;i<n;i++){
        arr[i]=i+1;
    }
    int count=0;
    while(next_permutation(arr,arr+n)){
        if(check(arr,n))
            {print(arr,n);
            count++;
            break;
            }            
    }
    if(count==0)
    cout<<"NO SOLUTION";
   

    return 0;
}