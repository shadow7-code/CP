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
        vector<int> sixy,twosy,threesy,zeroos;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%6==0)      sixy.push_back(x);
            else if(x%3==0) threesy.push_back(x);
            else if(x%2==0) twosy.push_back(x);
            else            zeroos.push_back(x);
        }
        for(int x:sixy)     cout<<x<<" ";
        for(int x:threesy)  cout<<x<<" ";
        for(int x:zeroos)   cout<<x<<" ";
        for(int x:twosy)    cout<<x<<" ";
        cout<<"\n";
    }
    return 0;
}