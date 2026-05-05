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

        bool has2026=(s.find("2026")!=string::npos);
        bool has2025=(s.find("2025")!=string::npos);

        cout<<(!(has2026||!has2025))<<"\n";
    }
}