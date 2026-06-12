#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> helper(vector<int> &arr){
    vector<pair<int,int>> v;
    int n=arr.size();
    int i=0;
    while(i<n){
        int num=arr[i];
        int cnt=0;
        while(i<n && arr[i]==num){
            cnt++;
            i++;
        }
        v.push_back({num,cnt});
    }

    return v;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        sort(arr.begin(),arr.end());

        vector<pair<int,int>> v=helper(arr);
        long long last=LLONG_MAX;
        bool flag=false;
        int nn=v.size();
        for(int i=nn-1;i>=0;i--){
            bool win=false;

            if(last<=v[i].first+k)      win=true;
            else if(v[i].second %2==0)  win=true;
            if(win)    flag=true;
            else       last=v[i].first;
        }
        cout<<(flag ? "YES\n" : "NO\n");
    }
    return 0;
}