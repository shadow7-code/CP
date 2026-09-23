#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    int l=-1,r=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            if(l==-1)    l=i;
            r=i+1;
        }
    }
    if(l==-1){
        cout<<"yes\n";
        cout<<"1 1\n";
        return 0;
    }
    reverse(arr.begin()+l,arr.begin()+r+1);
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout<<"no\n";
            return 0;
        }
    }
    cout<<"yes\n";
    cout<<l+1<<" "<<r+1<<"\n";
    return 0;
}