#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k,a=0,b=0;
        cin>>n>>k;
        vector<int> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    cin>>brr[i];
        for(int i=0;i<n;i++){
            if((arr[i]%2) != k%2)    a++;
            if((brr[i]%2) != k%2)    b++;
        }
        if(a>=b)    cout<<"Yes"<<"\n";
        else        cout<<"No"<<"\n";
    }
    return 0;
}
