#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n, count = 0, sum = 0;
        cin>>a>>b>>n;

        if(sum > n)
            cout<<0<<endl;
        else
        {
            while(sum <= n)
            {
                if(a > b)
                {
                    b += a;
                    sum = b;
                    count++;
                }
                else
                {
                    a += b;
                    sum = a;
                    count++;
                }

                if(sum > n)
                    break;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}
