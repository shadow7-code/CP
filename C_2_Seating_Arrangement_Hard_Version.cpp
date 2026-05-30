#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n,x,s;
        cin >> n >> x >> s;
        string str;
        cin >> str;
        long long emptt=x;
        long long used=0;
        long long ambi=0;
        int res=0;

        if(x==0){
            cout << 0 << '\n';
            continue;
        }
        if(s==1){
            int res=0;
            int emptt=x;
            for(char c:str){
                if((c=='I' || c=='A') && emptt){
                    emptt--;
                    res++;
                }
            }
            cout << res << '\n';
            continue;
        }
        for(char c:str){
            if(c=='I'){
                if(emptt){
                    emptt--;
                    used+=s-1;
                    res++;
                }
            }
            else if(c=='A'){
                if(used){
                    used--;
                    ambi++;
                    res++;
                }
                else if(emptt){
                    emptt--;
                    used+=s-1;
                    res++;
                }
            }
            else{
                if(used){
                    used--;
                    res++;
                }
                else if(ambi && emptt){
                    ambi--;
                    emptt--;
                    used+=s;
                    used--;
                    res++;
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}