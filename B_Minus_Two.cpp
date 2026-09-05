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
        int rem1=0,rem2=0,rem3=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2!=0)         rem1++;
            else if(x%4==0)    rem2++;
            else               rem3++;
        }
        cout<<max({rem1,rem2,rem3})<<"\n";
    } 
    return 0;
}