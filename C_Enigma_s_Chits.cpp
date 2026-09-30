#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t; 
    while(t--){ 
        long long a,b,c;
        cin>>a>>b>>c;
        if(b%2!=0 || a<c%3){
            cout<<"-1\n";
            continue;
        }
        long long x=1;
        long long k=c/3;
        for(int i=0;i<k;i++){
            cout<<x<<" "<<x+3<<"\n";
            cout<<x+1<<" "<<x+4<<"\n";
            cout<<x+2<<" "<<x+5<<"\n";
            x+=6;
        }
        k=c%3;
        for(int i=0;i<k;i++){
            cout<<x<<" "<<x+3<<"\n";
            cout<<x+1<<" "<<x+2<<"\n";
            x+=4;
        }
        a-=k;
        k=b/2;
        for(int i=0;i<k;i++){
            cout<<x<<" "<<x+2<<"\n";
            cout<<x+1<<" "<<x+3<<"\n";
            x+=4;
        }
        for(int i=0;i<a;i++){
            cout<<x<<" "<<x+1<<"\n";
            x+=2;
        }
    } 
    return 0;
}