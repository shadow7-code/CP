#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,odd=0,even=0,lodd=0,leve=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(x&1)  {odd++;lodd=i;}
        else     {even++;leve=i;}
    }
    cout<<(odd==1?lodd:leve);
    return 0;
}