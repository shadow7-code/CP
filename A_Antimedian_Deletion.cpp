#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        if(n==1){
            cout<<1<<"\n";
        }else{
            for(int i=0;i<n;i++){
                cout<<2;
                if(i!=n-1)    cout<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}