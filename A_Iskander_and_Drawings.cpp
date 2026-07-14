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
        string s;
        cin>>s;
        int cnt=0,maxi=0;
        for(char c:s){
            if(c=='#'){
                cnt++;
                maxi=max(maxi,cnt);
            }else{
                cnt=0;
            }
        }
        cout<<(maxi+1)/2<<"\n";
    }
    return 0;
}