#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    vector<string> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt=0;

    for(int x=1;x<=min(n,m)/2;x++){
        for(int i=x;i<n-x;i++){
            for(int j=x;j<m-x;j++){
                if(arr[i][j]=='*' && arr[i-x][j]=='*' && arr[i+x][j]=='*' && arr[i][j-x]=='*' && arr[i][j+x]=='*'){
                    cnt++;
                    if(cnt==k){
                        cout<<i+1<<" "<<j+1<<"\n";
                        cout<<i-x+1<<" "<<j+1<<"\n";
                        cout<<i+x+1<<" "<<j+1<<"\n";
                        cout<<i+1<<" "<<j-x+1<<"\n";
                        cout<<i+1<<" "<<j+x+1<<"\n";
                        return 0;
                    }
                }
            }
        }
    }
    cout<<-1<<"\n";
    return 0;
}