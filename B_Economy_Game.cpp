#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin>>n;
    for(int a=0;a<=n/1234567;a++){
        for(int b=0;b<=n/123456;b++){
            int rem=n-a*1234567-b*123456;
            if(rem>=0 && rem%1234==0){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}