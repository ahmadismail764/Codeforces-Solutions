#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << ((abs(a - b) <= 1 && !(a == 0 && b == 0)) ? "YES" : "NO");
}