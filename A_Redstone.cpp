#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>freq;
        bool flag=false;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            freq[x]++;
        }
        for(auto i:freq){
            if(i.second>=2) flag=true;
        }
        cout << (flag ? "YES" : "NO") <<"\n";
        
    }
    return 0;
}