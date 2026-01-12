#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--){
        long long n; 
        cin >> n; 
        vector<long long> arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }    
        if (arr[0]==1)   cout <<"YES"<< "\n";
        else             cout <<"NO"<< "\n"; 
    }
    return 0; 
}