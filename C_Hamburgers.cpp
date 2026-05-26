#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    long long nb,ns,nc;
    cin >> nb >> ns >> nc;
    long long pb,ps,pc;
    cin >> pb >> ps >> pc;
    long long ru;
    cin >> ru;
    long long cb=0,cs=0,cc=0;

    for(char c:s){
        if(c=='B')          cb++;
        else if(c=='S')     cs++;
        else                cc++;
    }

    long long l=0,r=1e13,res=0;
    while(l<=r){
        long long mid=(l+r)/2;
        long long rb=max(0LL,mid*cb-nb);
        long long rs=max(0LL,mid*cs-ns);
        long long rc=max(0LL,mid*cc-nc);
        long long cost=rb*pb+rs*ps+rc*pc;

        if(cost<=ru){
            res=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout << res;
}