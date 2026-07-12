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
        if(n==2)    cout<<-1<<"\n";
        else{
            long long x=1;
            for(int i=1;i<=n;i++){
                cout<<x<<" ";
                if(i<3) x++;
                else x*=2;
            }
            cout<<"\n";
        }
    }
    return 0;
}