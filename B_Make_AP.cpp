#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
 
        if((b-a)==(c-b)){ 
            cout<<"YES\n";
        }else if((2*b-c)>0 && (2*b-c)%a==0){ 
            cout<<"YES\n";
        }else if((a+c)%(2*b)==0){
            cout<<"YES\n";
        }else if((2*b-a)>0 && (2*b-a)%c==0){ 
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}