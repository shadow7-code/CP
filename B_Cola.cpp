#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c;
    cin>>n>>a>>b>>c;
    long long res=0;
    for(int x=0;x<=a;x++){
        for(int y=0;y<=b;y++){
            int rem=2*n-x-2*y;
            if(rem>=0 && rem%4==0)    if(rem/4<=c)    res++;
        }
    }
    cout<<res;
    return 0;
}