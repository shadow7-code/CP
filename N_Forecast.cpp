#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,c;
    cin>>a>>b>>c;

    double d=b*b-4*a*c;
    double x1=(-b+sqrt(d))/(2*a);
    double x2=(-b-sqrt(d))/(2*a);

    cout<<fixed<<setprecision(15);
    cout<<max(x1,x2)<<"\n";
    cout<<min(x1,x2)<<"\n";

    return 0;
}