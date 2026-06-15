#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++)    cin>>p[i];
        int pos=1;
        while(pos<=n&&p[pos]==n-pos+1){
            pos++;
        }

        int id=-1;
        for(int i=pos;i<=n;i++){
            if(p[i]==n-pos+1){
                id=i;
            }
        }
        for(int i=1;i<pos;i++){
            cout<<p[i]<<" ";
        }
        if(id!=-1){
            for(int i=id;i>=pos;i--){
                cout<<p[i]<<" ";
            }
            for(int i=id+1;i<=n;i++){
                cout<<p[i]<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}