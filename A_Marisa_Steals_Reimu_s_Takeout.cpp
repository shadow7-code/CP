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
        int zero=0,ones=0,two=0;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0)        zero++;
            else if(x==1)   ones++;
            else            two++;
        }
        cout<<zero+min(ones,two)+(max(ones,two)-min(ones,two))/3<<"\n";
    }
    return 0;
}