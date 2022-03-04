#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int a1, b1, maxi = 0, res = 0;

    while(n--)
    {
        cin>>a1>>b1;
        res -= a1;
        res += b1;

        maxi = max(maxi, res);
    }

    cout<<maxi;

    return 0;
}
