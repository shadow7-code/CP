#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2,c=0;
        cin>>a1>>a2>>b1>>b2;

        if((a1>b1)+(a2>b2)>(a1<b1)+(a2<b2)) c++;
        if((a1>b2)+(a2>b1)>(a1<b2)+(a2<b1)) c++;
        if((a2>b1)+(a1>b2)>(a2<b1)+(a1<b2)) c++;
        if((a2>b2)+(a1>b1)>(a2<b2)+(a1<b1)) c++;

        cout<<c<<"\n";
    }
}