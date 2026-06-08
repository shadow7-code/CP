#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        string r=s;
        int bal=0;

        for(int i=0;i<n;i++){
            if(i%2==0){
                if(bal==0){
                    r[i]='(';
                    bal++;
                }else{
                    r[i]=')';
                    bal--;
                }
            }else{
                if(r[i]=='(') bal++;
                else bal--;
            }
        }
        long long res=0;
        vector<int> st;
        for(int i=0;i<n;i++){
            if(r[i]=='('){
                st.push_back(i+1);
            }else{
                res+=(i+1)-st.back();
                st.pop_back();
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}