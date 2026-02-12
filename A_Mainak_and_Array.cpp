#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		long long n;
		cin >> n; 
		vector<long long> arr(n);
		for (long long i = 0; i < n; i++) 	cin >> arr[i];

		long long res = arr[n - 1] - arr[0];

		for (int i = 1; i < n; i++)	        res = max(res, arr[i] - arr[0]);
		for (int i = 0; i < n-1; i++)	    res = max(res, arr[n - 1] - arr[i]);
		for (int i = 0; i<  n-1; i++) 	    res = max(res, arr[i] - arr[i + 1]);

		cout << res << endl;
	}
	return 0;
}