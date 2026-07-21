#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(10);
    if(a==0){
        if(b==0){
            if(c==0)    cout<<-1<<"\n";
            else        cout<<0<<"\n";
        }else{
            double x=-c/b;
            if(abs(x)<1e-9) x=0;
            cout<<1<<"\n";
            cout<<x<<"\n";
        }
    }else{
        double d=b*b-4*a*c;
        if(d<0)    cout<<0<<"\n";
        else if(d==0){
            cout<<1<<"\n";
            cout<<-b/(2*a)<<"\n";
        }else{
            double x1=(-b-sqrt(d))/(2*a);
            double x2=(-b+sqrt(d))/(2*a);
            if(x1>x2) swap(x1,x2);
            if(abs(x1)<1e-9) x1=0;
            if(abs(x2)<1e-9) x2=0;
            cout<<2<<"\n"<<x1<<"\n"<<x2<<"\n";
        }
    }
    return 0;
}