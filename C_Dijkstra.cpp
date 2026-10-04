#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,long long>>> arr(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        long long w;
        cin>>a>>b>>w;
        arr[a].push_back({b,w});
        arr[b].push_back({a,w});
    }
    const long long INF=1e18;
    vector<long long> dist(n+1,INF);
    vector<int> par(n+1,-1);
    priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;

    dist[1]=0;
    pq.push({0,1});
    while(!pq.empty()){
        long long d=pq.top().first;
        int x=pq.top().second;
        pq.pop();
        if(d!=dist[x])    continue;
        for(int i=0;i<(int)arr[x].size();i++){
            int y=arr[x][i].first;
            long long w=arr[x][i].second;
            if(dist[y]>dist[x]+w){
                dist[y]=dist[x]+w;
                par[y]=x;
                pq.push({dist[y],y});
            }
        }
    }
    if(dist[n]==INF){
        cout<<-1<<"\n";
        return 0;
    }

    vector<int> res;
    int x=n;
    while(x!=-1){
        res.push_back(x);
        x=par[x];
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<(int)res.size();i++)    cout<<res[i]<<" ";
    cout<<"\n";

    return 0;
}