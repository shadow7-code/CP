#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll calc(ll alice, ll bob, ll carol, ll m){
    ll total_alice = m / alice;

    ll ab = m / lcm(alice, bob);
    ll ac = m / lcm(alice, carol);
    ll abc = m / lcm(lcm(alice, bob), carol);

    ll alone = total_alice - ab - ac + abc;
    ll doubles = ab + ac - 2 * abc;
    ll triples = abc;

    return alone * 6 + doubles * 3 + triples * 2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--){
        ll alice, bob, carol, m;
        cin >> alice >> bob >> carol >> m;

        cout << calc(alice, bob, carol, m) << " "
             << calc(bob, alice, carol, m) << " "
             << calc(carol, alice, bob, m) << "\n";
    }
}