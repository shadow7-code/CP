#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    vector<int> arr;
    int x=0;
    for(int i=0;i<=s.size();i++){
        if(i<s.size() && s[i]!=','){
            x=x*10+(s[i]-'0');
        }else{
            arr.push_back(x);
            x=0;
        }
    }
    sort(arr.begin(),arr.end());
    arr.erase(unique(arr.begin(),arr.end()),arr.end());
    int n=arr.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j+1<n && arr[j+1]==arr[j]+1)    j++;
        if(i>0)    cout<<",";
        if(i==j)   cout<<arr[i];
        else       cout<<arr[i]<<"-"<<arr[j];
        i=j;
    }
    cout<<"\n";
    return 0;
}