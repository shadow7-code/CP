#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(mat[i][j]==1)    continue;

            bool flag = false;
            for (int r = 0; r < n && !flag; r++) {       
                for (int c = 0; c < n && !flag; c++) {    
                    if (mat[i][r] + mat[c][j] == mat[i][j]) {
                        flag = true;
                    }
                }
            }
            if(!flag){
                cout << "No";
                return 0;
            }
        }
    }
    cout << "Yes";
    return 0;
}