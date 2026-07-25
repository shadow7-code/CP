#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1,0);
    while(m--){
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++)    arr[i]++;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]!=1){
            cout<<i<<" "<<arr[i];
            return 0;
        }
    }
    cout<<"OK";
    return 0;
}