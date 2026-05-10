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
        vector<long long>arr(n),brr;
        int pos=0,neg=0,zero=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0){
                pos++;
                brr.push_back(arr[i]);
            }else if(arr[i]<0){
                neg++;
                brr.push_back(arr[i]);
            }else{
                zero++;
            }
        }
        if(pos>2||neg>2){
            cout<<"NO\n";
            continue;
        }
        if(zero)    brr.push_back(0);
        if(zero>1)  brr.push_back(0);

        set<long long>s(brr.begin(),brr.end());
        bool flag=true;
        int m=brr.size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<m;j++){
                for(int k=j+1;k<m;k++){
                    long long sum=brr[i]+brr[j]+brr[k];
                    if(!s.count(sum)){
                        flag=false;
                    }
                }
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
}