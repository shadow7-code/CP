#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n),brr(n);
        long long suma=0,sumb=0;
        long long maxa=0,maxb=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            suma+=arr[i];
            maxa=max(maxa,arr[i]);
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
            sumb+=brr[i];
            maxb=max(maxb,brr[i]);
        }
        if(suma>sumb || maxa>maxb){
            cout<<-1<<"\n";
            continue;
        }

        vector<int> order;
        vector<int> vis(n,false);
        bool flag=true;
        for(int i=0;i<n;i++){
            int idx=-1;
            for(int j=0;j<n;j++){
                if(!vis[j] && arr[j]<=brr[i]){
                    idx=j;
                    break;
                }
            }
            if(idx==-1){
                flag=false;
                break;
            }
            vis[idx]=true;
            order.push_back(idx);
        }

        if(!flag){
            cout<<-1<<"\n";
            continue;
        }
        long long res=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(order[i]>order[j]){
                    res++;
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}