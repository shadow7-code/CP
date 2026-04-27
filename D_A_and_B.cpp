#include <bits/stdc++.h>
using namespace std;

long long solve(string s,char ch){
    vector<int>pos;
    for(int i=0;i<s.size();i++){
        if(s[i]==ch){
            pos.push_back(i);
        }
    }   
    int k=pos.size();
    if(k<=1)    return 0;

    vector<long long>arr;

    for(int i=0;i<k;i++)    arr.push_back(pos[i]-i);

    int mid=k/2;
    long long start=arr[mid];
    long long ans=0;

    for(int i=0;i<k;i++)    ans+=abs(arr[i]-start);
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        long long x=solve(s,'a');
        long long y=solve(s,'b');
        cout<<min(x,y)<<"\n";
    }
    return 0;
}