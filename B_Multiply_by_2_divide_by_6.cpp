#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
	    cin>>n;
        long long temp=n;
        long long res=0;
        while(temp!=1){
            if(temp % 6==0) {
                temp/=6;
                res++;
            }else if(temp % 3==0){
                temp*=2;
                res++;
            }else{
                res=-1;
                break;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}