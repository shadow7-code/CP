#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;

        long long a=-1,b=-1,c=-1;
        long long x=n;
        for(long long i=2;i*i<=x;i++){
            if(x%i==0){
                a=i;
                x/=i;
                break;
            }
        }
        if(a==-1){
            cout<<"NO\n";
            continue;
        }
        for(long long i=2;i*i<=x;i++){
            if(x%i==0 && i!=a){
                b=i;
                x/=i;
                break;
            }
        }
        c=x;
        if(a!=-1 && b!=-1 && c>1 && c!=a && c!=b){
            cout<<"YES\n";
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}