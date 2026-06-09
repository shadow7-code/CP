#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int> ans(n,0);
        for(int i=0;i<k;i++){
            vector<int> st;
            vector<pair<int,int>> pair;
            int x=-1;
            for(int j=0;j<n;j++){
                if(ans[j])  continue;
                if(s[j]=='('){
                    st.push_back(j);
                }else{
                    if(st.size()){
                        pair.push_back({st.back(),j});
                        st.pop_back();
                    }else{
                        x=j;
                    }
                }
            }
            if(pair.empty())    break;
            if(st.empty()){
                ans[pair[0].first]=1;
            }else{
                if(pair[0].first<st[0])     ans[pair[0].first]=1;
                else                        ans[pair[0].second]=1;            
            }
        }
        for(int x:ans)  cout<<x;
        cout<<"\n";
    }
    return 0;
}