#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        int x=s[i]-'0';
        if(x>4){
            if(i==0 && x==9)    continue;
            s[i]=(9-x)+'0';
        }
    }
    cout<<s;
    return 0;
}
