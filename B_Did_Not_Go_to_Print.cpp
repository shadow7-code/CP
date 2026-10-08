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
        stack<int> st;
        vector<bool> arr(n+1, false);
        for(int i=0;i<n;i++){
            if(s[i]=='1')    st.push(i+1);
            else if(s[i]=='2'){
                if(!st.empty()){
                    int x=st.top();
                    st.pop();
                    arr[x]=true;
                }else    arr[i+1]=true;
            }else    arr[i+1]=true;
        }
        vector<int> res;
        for(int i=1;i<=n;i++)    if(!arr[i])    res.push_back(i);
        int cnt=res.size();
        cout<<cnt<<"\n";
        for(int i=0;i<cnt;i++){
            if(i==cnt-1)    cout<<res[i];
            else            cout<<res[i]<<" ";
        }
        cout<<"\n";
    } 
    return 0;
}