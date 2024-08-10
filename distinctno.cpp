#include <bits/stdc++.h>
using namespace std;

int main(){

    long long n;
    cin>>n;

    set<int> s;
    int y;
    for(int i=0;i<n;i++){
        cin>>y;
        s.insert(y);
    }

    cout<<s.size();



    return 0;
}