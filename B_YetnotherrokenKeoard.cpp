#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> upper,lower;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='b'){
                s[i]=' ';
                if(!lower.empty()){
                    s[lower.back()]=' ';
                    lower.pop_back();
                }
            }else if(s[i]=='B'){
                s[i]=' ';
                if(!upper.empty()){
                    s[upper.back()]=' ';
                    upper.pop_back();
                }
            }else if(s[i]>='a' && s[i]<='z'){
                lower.push_back(i);
            }else{
                upper.push_back(i);
            }
        }
        for(int i=0;i<n;i++)    if(s[i]!=' ')    cout<<s[i];
        cout<<"\n";
    }
    return 0;
}