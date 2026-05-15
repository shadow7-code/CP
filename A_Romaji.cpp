#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c){
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(isvowel(s[i])||s[i]=='n'){
            continue;
        }
        if(i==n-1||!isvowel(s[i+1])){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}