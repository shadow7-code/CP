#include<bits/stdc++.h>
using namespace std;

class Team{
public:
    string name;
    int pts,gf,ga;
    Team(){
        pts=0;
        gf=0;
        ga=0;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<Team> arr(n);
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i].name;
        mp[arr[i].name]=i;
    }
    int m=n*(n-1)/2;
    for(int i=0;i<m;i++){
        string teams,score;
        cin>>teams>>score;

        int p=teams.find('-');
        string a=teams.substr(0,p),b=teams.substr(p+1);
        int c=score.find(':');
        int x=stoi(score.substr(0,c)),y=stoi(score.substr(c+1));
        int u=mp[a],v=mp[b];

        arr[u].gf+=x;
        arr[u].ga+=y;
        arr[v].gf+=y;
        arr[v].ga+=x;

        if(x>y)         arr[u].pts+=3;
        else if(x<y)    arr[v].pts+=3;
        else            arr[u].pts++,arr[v].pts++;
    }

    sort(arr.begin(),arr.end(),[](Team &a,Team &b){
        if(a.pts!=b.pts)    return a.pts>b.pts;
        int gd1=a.gf-a.ga;
        int gd2=b.gf-b.ga;
        if(gd1!=gd2)    return gd1>gd2;
        return a.gf>b.gf;
    });

    vector<string> res;
    for(int i=0;i<n/2;i++){
        res.push_back(arr[i].name);
    }
    sort(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\n";
    }

    return 0;
}