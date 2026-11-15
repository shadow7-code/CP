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
        if(n<4){
            cout<<-1<<'\n';
            continue;
        }
        if(n%2==0)    for(int i=n;i>=1;i--)    cout<<i<<" ";
        else{
            for(int i=n-1;i>=4;i-=2)    cout<<i<<" "<<i+1<<" ";
            cout<<"3 1 2";
        }
        cout<<'\n';
    }
    return 0;
}