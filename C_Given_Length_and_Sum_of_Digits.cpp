#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int m,s;
    cin>>m>>s;

    if(s==0){
        if(m==1) cout<<"0 0\n";
        else cout<<"-1 -1\n";
        return 0;
    }
    if(s>9*m){
        cout<<"-1 -1\n";
        return 0;
    }

    string maxi="",mini(m,'0');
    int sum=s;
    for(int i=0;i<m;i++){
        int d=min(9,sum);
        maxi.push_back(char('0'+d));
        sum-=d;
    }
    sum=s-1;
    mini[0]='1';
    for(int i=m-1;i>=0;i--){
        int d=min(9,sum);
        mini[i]+=d;
        sum-=d;
    }

    cout<<mini<<" "<<maxi<<"\n";
    return 0;
}