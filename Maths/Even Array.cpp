#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n, odd = 0, even = 0;
        cin>>n;

        int a[n];

        for(int i = 0; i < n; i++)
            cin>>a[i];

        for(int i = 0; i < n; i++)
        {
            if(i % 2 != a[i] % 2)
            {
                if(i % 2 ==0)
                    even++;
                else
                    odd++;
            }
        }

        if(even == odd)
            cout<<even<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
