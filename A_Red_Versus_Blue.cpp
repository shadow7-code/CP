#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,r,b;
		cin>>n>>r>>b;

		string s="";
		int temp = r/(b+1);
		int res = r%(b+1);

	    for(int i=0;i<b+1;i++){
			for(int j=0;j<temp;j++) s+='R';
			if(res>0){
				s+='R';
				res--;
			}
			if(i<b){
                s+='B';
            }
		}
		cout<<s<<"\n";
	}
}