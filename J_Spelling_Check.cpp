#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    int n=a.size();
    int l=0,r=0;
    while(l<n-1 && a[l]==b[l])    l++;
    while(r<n-1 && a[n-1-r]==b[n-2-r])    r++;

    int left=max(n-r,1),right=min(l+1,n);
    if(left>right){
        cout<<0;
        return 0;
    }
    cout<<right-left+1<<"\n";
    for(int i=left;i<=right;i++)    cout<<i<<" ";

    return 0;
}