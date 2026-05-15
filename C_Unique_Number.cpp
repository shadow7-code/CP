#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;

        if(x>45){
            cout<<-1<<"\n";
            continue;
        }
        string s;
        for(int i=9;i>=1;i--){
            if(x>=i){
                s.push_back(i+'0');
                x-=i;
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<"\n";
    }
}