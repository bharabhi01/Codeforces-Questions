#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int a, b;
        cin>>a>>b;

        int x = max(a, b);
        int y = min(a, b);

        if(y * 2 > x)
            cout<<4 * y * y<<endl;
        else
            cout<<x * x<<endl;
    }
    
    return 0;
}
