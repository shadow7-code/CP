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
        string a,b;
        cin>>a>>b;
        int arr[2]={0,0},brr[2]={0,0};

        for(int i=0;i<n;i++){
            if(a[i]=='1')   arr[i%2]++;
            if(b[i]=='1')   brr[i%2]++;
        }
        if(arr[0]==brr[0] && arr[1]==brr[1])    cout<<"YES\n";
        else                                    cout<<"NO\n";
    }
    return 0;
}