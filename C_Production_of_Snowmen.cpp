#include<bits/stdc++.h>
using namespace std;

bool good(vector<int> &x,vector<int> &y,int n,int k){
    for(int i=0;i<n;i++)    if(x[i]<=y[(i+k)%n])    return false;
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n),brr(n),crr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        for(int i=0;i<n;i++) cin>>brr[i];
        for(int i=0;i<n;i++) cin>>crr[i];

        long long x=0,y=0;
        for(int i=0;i<n;i++){
            if(good(brr,arr,n,i))    x++;
            if(good(crr,brr,n,i))    y++;
        }
        cout<<x*y*n<<"\n";
    }
    return 0;
}