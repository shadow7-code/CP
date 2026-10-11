#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin>>a>>b>>c;

    vector<int> arr(a),brr(b);
    for(int i=0;i<a;i++)    cin>>arr[i];
    for(int i=0;i<b;i++)    cin>>brr[i];

    sort(arr.begin(),arr.end());
    sort(brr.begin(),brr.end());

    vector<long long> pref(a+1,0),suf(b+1,0);
    for(int i=0;i<a;i++)    pref[i+1]=pref[i]+arr[i];
    for(int i=0;i<b;i++)    suf[i+1]=suf[i]+brr[i];

    int maxi=0;
    long long res=0;

    for(int i=0;i<=a;i++){
        if(i> a)    break;

        int j=min(b,b+c);
        int rem=a-i+c;

        j=min(j,rem);
        j=min(j,b);

        int cnt=i+j;
        long long sum=pref[i]+suf[j];

        if(cnt>maxi){
            maxi=cnt;
            res=sum;
        }
        else if(cnt==maxi){
            res=min(res,sum);
        }
    }

    cout<<maxi<<" "<<res<<"\n";
    return 0;
}