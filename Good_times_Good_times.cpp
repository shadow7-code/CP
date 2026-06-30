#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<long long> arr={0,11,101,1001,10001,100001,1000001,10000001,100000001};

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<arr[s.length()]<<"\n";
    }
    return 0;
}