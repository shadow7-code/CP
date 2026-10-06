#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,res=1;
    cin>>n;
    vector<bool> used(3005,false);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        used[x]=true;
    }
    while(used[res])    res++;
    cout<<res<<"\n";
    return 0;
}