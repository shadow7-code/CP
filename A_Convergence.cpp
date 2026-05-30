#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)    cin >> arr[i];
        sort(arr.begin(),arr.end());

        int res=n;

        for(int i=0;i<n;i++){
            int l=lower_bound(arr.begin(),arr.end(),arr[i])-arr.begin();
            int r=arr.end()-upper_bound(arr.begin(),arr.end(),arr[i]);
            res=min(res,max(l,r));
        }
        cout << res << '\n';
    }
    return 0;
}