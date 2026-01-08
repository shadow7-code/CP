#include <iostream>
using namespace std;

int main() {
    int water;
    cin >> water;
    if (water > 2 && water % 2 == 0)    cout << "YES";
    else                                cout << "NO";
    return 0;
}