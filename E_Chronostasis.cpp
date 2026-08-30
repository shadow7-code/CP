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
        multiset<long long> b;
        for(int i=0;i<n;i++){
            long long x;
            cin>>x;
            b.insert(x);
        }
        vector<long long> arr(n);
        long long sum=0;
        bool flag=true;
        for(int i=0;i<n;i++){
            auto it=b.lower_bound(1-sum);
            if(it==b.end()){
                flag=false;
                break;
            }
            sum+=*it;
            arr[i]=sum;
            b.erase(it);
        }
        if(!flag){
            cout<<-1<<'\n';
        }
        else{
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" \n"[i==n-1];
            }
        }
    } 
    return 0;
}