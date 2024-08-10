#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    int sum2=0;
    int input;
    for(int j=0;j<n-1;j++){
        cin>>input;
        sum2+=input;
    }

    cout<<sum-sum2;

    return 0;
}