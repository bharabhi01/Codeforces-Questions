#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int x, y, n;
        cin>>x>>y>>n;

        int a = n / x;

        int ans = x * a + y;

        if(ans > n)
            ans -= x;

        cout<<ans<<endl;
    }

    return 0;
}
