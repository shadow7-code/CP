#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++)    cin>>p[i];

        int l=0,r=n-1;
        string s="";

        for(int i=1;i<=n;i++){
            if(i&1){
                if(p[l]<p[r])   s+='L',l++;
                else            s+='R',r--;
            }else{
                if(p[l]>p[r])   s+='L',l++;
                else            s+='R',r--;
            }
        }
        cout<<s<<"\n";
    }
}