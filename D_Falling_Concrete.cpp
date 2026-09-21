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
        set<int>s;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            s.insert(x-i);
        }
        vector<int> arr(s.begin(),s.end());
        int res=1,cnt=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]==arr[i-1]+1)    cnt++;
            else                      cnt=1;
            res=max(res,cnt);
        }
        cout<<res<<"\n";
    }
    return 0;
}