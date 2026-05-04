#include <bits/stdc++.h>
using namespace std;

bool check(int x1,int y1,int x2,int y2,int x3,int y3){
    int area=(x2-x1)*(y3-y1)-(x3-x1)*(y2-y1);
    if(area==0)     return false;

    int d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    int d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
    int d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
    
    return (d1+d2==d3)||(d1+d3==d2)||(d2+d3==d1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(check(x1,y1,x2,y2,x3,y3)){
        cout<<"RIGHT";
        return 0;
    }

    int dx[4]={1,-1,0,0};
    int dy[4]={0,0,1,-1};
    for(int i=0;i<4;i++){
        if(check(x1+dx[i],y1+dy[i],x2,y2,x3,y3))    {cout<<"ALMOST";    return 0;}
        if(check(x1,y1,x2+dx[i],y2+dy[i],x3,y3))    {cout<<"ALMOST";    return 0;}
        if(check(x1,y1,x2,y2,x3+dx[i],y3+dy[i]))    {cout<<"ALMOST";    return 0;}
    }
    cout<<"NEITHER";
}