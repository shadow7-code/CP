#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    set<pair<string,string>> arr;
    for(int i=0;i<n;i++){
        string a,b;
        cin>>a>>b;
        arr.insert({a,b});
    }
    cout<<arr.size();
    return 0;
}