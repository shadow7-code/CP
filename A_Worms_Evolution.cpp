#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(i!=j && i!=k && arr[i]==arr[j]+arr[k]){
                    cout<<i+1<<" "<<j+1<<" "<<k+1<<"\n";
                    return 0;
                }
            }
        }
    }
    cout<<-1<<"\n";
    return 0;
}