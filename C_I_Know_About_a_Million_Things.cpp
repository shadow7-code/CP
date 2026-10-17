#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int odd=0,eve=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x&1)    odd++;
            else       eve++;
        }
        if(n==1)                                         cout<<"Moggity\n";
        else if(n==2 && odd==1 && eve==1)                cout<<"Larpity\n";
        else if(odd==3 && eve==0 || odd==1 && eve==1)    cout<<"Larpity\n";
        else                                             cout<<"Moggity\n";
    }
    return 0;
}