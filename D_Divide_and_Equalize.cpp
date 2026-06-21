#include<bits/stdc++.h>
using namespace std;

void helper(int x,map<int,int>& cnt){
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            cnt[i]++;
            x/=i;
        }
    }
    if(x>1) cnt[x]++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int> cnt;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            helper(x,cnt);
        }
        bool flag=true;
        for(auto it:cnt){
            if(it.second%n!=0){
                flag=false;
                break;
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
    return 0;
}