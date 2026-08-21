#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m,x,y;
        cin>>n>>m>>x>>y;

        vector<int> arr(x),brr(y);
        for(int i=0;i<x;i++) cin>>arr[i];
        for(int i=0;i<y;i++) cin>>brr[i];
        vector<int> c,d,e;
        int i=0,j=0;

        while(i<x&&j<y){
            if(arr[i]==brr[j]){
                c.push_back(arr[i]);
                i++;
                j++;
            }else if(arr[i]<brr[j]){
                d.push_back(arr[i]);
                i++;
            }else{
                e.push_back(brr[j]);
                j++;
            }
        }
        while(i<x){
            d.push_back(arr[i]);
            i++;
        }
        while(j<y){
            e.push_back(brr[j]);
            j++;
        }
        vector<int> res;

        i=max(0,(int)d.size()-n);
        while(i<(int)d.size()){
            res.push_back(d[i]);
            i++;
        }
        i=max(0,(int)e.size()-m);
        while(i<(int)e.size()){
            res.push_back(e[i]);
            i++;
        }

        for(int val:c)    res.push_back(val);
        sort(res.begin(),res.end());
        i=max(0,(int)res.size()-n-m+1);
        long long sum=0;
        while(i<(int)res.size()){
            sum+=res[i];
            i++;
        }
        cout<<sum<<"\n";
    }
    return 0;
}