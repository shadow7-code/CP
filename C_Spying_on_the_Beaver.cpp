#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        vector<int> p(n),depth(n);
        for(int i=1;i<n;i++){
            cin>>p[i];
            p[i]--;
            depth[i]=depth[p[i]]+1;
        }
        cin>>m;
        vector<int> arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
            arr[i]--;
        }
        if(m==1){
            cout<<"0\n";
            continue;
        }
        int mini=0;
        for(int i=1;i<m;i++){
            if(depth[arr[i]]<depth[arr[mini]]){
                mini=i;
            }
        }
        cout<<m-1<<" ";
        for(int i=0;i<m;i++)    if(i!=mini)    cout<<arr[i]+1<<" ";
        cout<<"\n";
    }

    return 0;
}