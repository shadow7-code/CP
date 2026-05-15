#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int>a(n),b(n);

    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(a[i]!=b[i]){
            flag=true;
        }
    }
    if(flag){
        cout<<"rated";
        return 0;
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            cout<<"unrated";
            return 0;
        }
    }
    cout<<"maybe";
}