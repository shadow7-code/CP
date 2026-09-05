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
        string res(n,' ');
        vector<int> arr(n);
        vector<int> freq(n+2,0),ass(n+2,0);

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]<=n)    freq[arr[i]]++;
        }
        if(freq[0]==1){
            cout<<"NO\n";
            continue;
        }

        int k=0;
        while(freq[k]>=2)    k++;
        for(int i=0;i<n;i++){
            if(arr[i]<k){
                if(ass[arr[i]]==0)         res[i]='A';
                else if(ass[arr[i]]==1)    res[i]='B';
                else                       res[i]='C';
                ass[arr[i]]++;
            }else if(arr[i]==k)    res[i]='C';
            else                   res[i]='A';
        }
        cout<<"YES\n";
        cout<<res<<"\n";
    }
    return 0;
}