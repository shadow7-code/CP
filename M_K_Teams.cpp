
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n<2*k || n>3*k)    cout<<"-1\n";
        else{
            long long x=n-2*k;
            for(int i=0;i<k;i++){
                if(x){
                    cout<<"3 ";
                    x--;
                }else    cout<<"2 ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
