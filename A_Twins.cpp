#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> arr(n);
    int sum=0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum+=arr[i];
    }
    sum/=2;
    int count=0;
    int newsum=0;
    sort(arr.begin(),arr.end());
    for(int i=n-1;i>=0;i--){
      newsum+=arr[i];
      count++;
      if(newsum>sum){
        cout<<count<<"\n";
        return 0;
      }
    }
    return 0;
}