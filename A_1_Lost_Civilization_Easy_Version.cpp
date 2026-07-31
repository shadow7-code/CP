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
        vector<int> arr(n);
        stack<int>st;
        for(int i=0;i<n;i++)    cin>>arr[i];

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()==arr[i]+1){
                st.pop();
            }
            st.push(arr[i]);
        }
        cout<<st.size()<<"\n";
    }
    return 0;
}