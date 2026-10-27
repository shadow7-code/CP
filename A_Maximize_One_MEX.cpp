#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        if(k==1)    cout<<-1<<"\n";
        else{
            int x=max_element(arr.begin(),arr.begin()+n-k+1)-arr.begin();
            int y=min_element(arr.begin()+n-k+1,arr.end())-arr.begin();
            if(arr[x]>arr[y])    cout<<x+1<<" "<<y+1<<"\n";
            else                 cout<<-1<<"\n";
        }
    }
    return 0;
}