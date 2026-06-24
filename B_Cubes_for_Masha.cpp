#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<set<int>> arr(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<6;j++){
            int x;
            cin>>x;
            arr[i].insert(x);
        }
    }
    for(int x=1;x<=99;x++){
        string s=to_string(x);
        bool flag=false;
        if(s.size()==1){
            for(int i=0;i<n;i++)    if(arr[i].count(s[0]-'0')) flag=true;
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i!=j &&
                       arr[i].count(s[0]-'0') &&
                       arr[j].count(s[1]-'0')){
                       flag=true;
                    }
                }
            }
        }
        if(!flag){
            cout<<x-1<<"\n";
            return 0;
        }
    }
    cout<<99<<"\n";
    return 0;
}