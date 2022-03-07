#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n, a;
        cin>>n;
        int ind = n;
        n *= 2;

        vector<int>skills;
        for(int i = 0; i < n; i++)
        {
            cin>>a;
            skills.push_back(a);
        }

        sort(skills.begin(), skills.end());

        int ans = 0;
        ans = abs(skills[ind - 1] - skills[ind]);

        cout<<ans<<endl;
    }

    return 0;
}
