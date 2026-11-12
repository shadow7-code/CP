
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
        vector<int> arr(n),res(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());

        int l=0,r=n-1,a=0,b=0,x=0;
        for(int i=0;i<n;i++){
            if(i%2==0)    res[l++]=arr[i];
            else          res[r--]=arr[i];
        }
        for(int i=0;i<n;i++){
            x++;
            if(i==n-1 || arr[i]!=arr[i+1]){
                a++;
                if(x>=2)    b++;
                x=0;
            }
        }
        cout<<a+b<<"\n";
        for(int i=0;i<n;i++)    cout<<res[i]<<" ";
        cout<<"\n";
    } 
    return 0;
}
