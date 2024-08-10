#include <bits/stdc++.h>
using namespace std;

int main(){
    int maxcount=1;
    int count=0;
    string input;
    cin>> input;
    for(int i=0;i<input.length()-1;i++){
        if(input[i+1]==input[i])
            count++;
        else count=1;
        maxcount=max(maxcount,count);
    }
    cout<<maxcount;



    return 0;
}