#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];

        sort(arr.begin(),arr.end());
        for(int i=0;i<m;i++){
            long long a,b,c;
            cin>>a>>b>>c;
            int l=0,r=n-1;
            while(l<r){
                int mid=(l+r)/2;
                if(arr[mid]>=b)    r=mid;
                else               l=mid+1;
            }
            if((arr[l]-b)*(arr[l]-b)<4*a*c){
                cout<<"YES\n";
                cout<<arr[l]<<"\n";
            }
            else{
                l--;
                if(l>=0 && (arr[l]-b)*(arr[l]-b)<4*a*c){
                    cout<<"YES\n";
                    cout<<arr[l]<<"\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }
    }
    return 0;
}