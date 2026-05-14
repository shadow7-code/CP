#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        bool pos=true;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                pos=false;
            }
        }

        for(auto p:primes){
            if(p>n/2)   break;

            vector<int>cnt(p);
            for(int i=0;i<n;i++){
                cnt[arr[i]%p]++;
            }

            bool flag=true;
            for(int i=0;i<p;i++){
                if(cnt[i]<2){
                    flag=false;
                }
            }

            if(flag)    pos=false;
        }
        cout<<(pos?"YES":"NO")<<"\n";
    }
}