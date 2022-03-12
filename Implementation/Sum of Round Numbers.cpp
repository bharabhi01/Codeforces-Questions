#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
            vector<int>num;
            int n, ans;
            cin>>n;

            if(n % 10 != 0)
                num.push_back(n % 10);
            ans = n % 10;
            n -= ans;

            if(n % 100 != 0)
                num.push_back(n % 100);
            ans = n % 100;
            n -= ans;

            if(n % 1000 != 0)
                num.push_back(n % 1000);
            ans = n % 1000;
            n -= ans;

            if(n % 10000 != 0)
                num.push_back(n % 10000);
            
            if(n >= 10000 && n % 10000 == 0)
                num.push_back(n);

            cout<<num.size()<<endl;
            for(int i = 0; i < num.size(); i++)
                cout<<num[i]<<" ";
            
            cout<<endl;
    }

    return 0;
}
