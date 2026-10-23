#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t; 
    while(t--){
        int n;
        long long k;
        cin>>n>>k;
        vector<pair<long long, pair<long long, long long>>> arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i].first>>arr[i].second.first>>arr[i].second.second;
        sort(arr.begin(), arr.end());
        priority_queue<pair<long long, long long>> pq;
        
        int i=0;
        long long cur=k;
        while(true){
            while(i<n && arr[i].first<=cur){
                pq.push({arr[i].second.second, arr[i].second.first});
                i++;
            }
            while(!pq.empty() && cur>pq.top().second){
                pq.pop();
            }
            if(pq.empty())             break;
            if(pq.top().first<=cur)    break;
            cur=pq.top().first;
            pq.pop();
        }
        cout<<cur<<"\n";
    } 
    return 0;
}