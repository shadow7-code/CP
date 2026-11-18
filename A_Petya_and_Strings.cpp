#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b;
    cin>>a>>b;
    int res=0;
    for(int i=0;i<a.size();i++){
        char x=tolower(a[i]),y=tolower(b[i]);
        if(x<y){
            res=-1;
            break;
        }else if(x>y){
            res=1;
            break;
        }
    }
    cout<<res<<"\n";
    
    return 0;
}