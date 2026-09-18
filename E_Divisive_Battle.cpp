#include<bits/stdc++.h>
using namespace std;

int prime(int x){
    set<int> s;
    for(int i=2;i*i<=x;i++){
        while(x%i==0){
            s.insert(i);
            x/=i;
        }
    }
    if(x>1)            s.insert(x);
    if(s.size()>1)     return -1;
    if(s.size()==0)    return 1;

    return *s.begin();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n),brr(n);
        for(int i=0;i<n;i++)    cin>>arr[i];
        for(int i=0;i<n;i++)    brr[i]=prime(arr[i]);

        if(is_sorted(arr.begin(),arr.end()))                cout<<"Bob\n";
        else if(*min_element(brr.begin(),brr.end())==-1)    cout<<"Alice\n";
        else if(is_sorted(brr.begin(),brr.end()))           cout<<"Bob\n";
        else                                                cout<<"Alice\n";
    }
    return 0;
}