#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){ 
        long long a,b;
        cin>>a>>b;
        if(a<b && min(a/2,b/3)>=b-a)    cout<<"Bob\n";
        else                            cout<<"Alice\n";
    } 
    return 0;
}