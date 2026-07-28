#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)    cin>>arr[i];
    int i=0,j=n-1,a=0,b=0,x=0,y=0;
    while(i<=j){
        if(x<=y){
            x+=arr[i];
            a++,i++;
        }else{
            y+=arr[j];
            b++,j--;
        }
    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}