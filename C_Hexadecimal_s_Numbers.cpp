#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    int res=0;
    for(int i=1;i<(1<<10);i++){
        int x=i;
        long long sum=0,p=1;
        while(x){
            sum+=(x%2)*p;
            p*=10;
            x/=2;
        }
        if(sum<=n)    res++;
    }
    cout<<res;
    return 0;
}