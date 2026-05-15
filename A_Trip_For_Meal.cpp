#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,a,b,c;
    cin>>n>>a>>b>>c;

    if(n==1){
        cout<<0;
        return 0;
    }
    cout<<min(a,b)+(n-2)*min({a,b,c});
}