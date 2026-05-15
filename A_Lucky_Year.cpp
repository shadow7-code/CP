#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int temp=n,d=0;
    while(temp){
        d++;
        temp/=10;
    }
    int first=n;
    while(first>=10){
        first/=10;
    }
    int res=(first+1);
    for(int i=1;i<d;i++){
        res*=10;
    }
    cout<<res-n;
}