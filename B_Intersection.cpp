#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    if((a1==0 && b1==0 && c1!=0) || (a2==0 && b2==0 && c2!=0))        cout<<0<<"\n";
    else if((a1==0 && b1==0 && c1==0) || (a2==0 && b2==0 && c2==0))   cout<<-1<<"\n";
    else if(a1*b2==a2*b1 && a1*c2==a2*c1 && b1*c2==b2*c1)             cout<<-1<<"\n";
    else if(a1*b2==a2*b1)                                             cout<<0<<"\n";
    else                                                              cout<<1<<"\n";
    return 0;
}