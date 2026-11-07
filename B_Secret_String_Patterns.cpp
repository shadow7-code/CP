#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        cout<<"? 1 "<<n<<endl;
        cin>>a;
        if(a==-1) return 0;
        if(a==0 || a==n){
            cout<<"! NO"<<endl;
            continue;
        }
        cout<<"? 1 "<<a<<endl;
        cin>>b;
        if(b==-1) return 0;

        if(b<a)     cout<<"! YES"<<endl;
        else        cout<<"! NO"<<endl;
    }
    return 0;
}