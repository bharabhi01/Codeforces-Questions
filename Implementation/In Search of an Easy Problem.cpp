#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, currMax = 0;
    cin>>n;
    string ans;
    
    for(int i = 0; i < n; i++)
    {
        int currAns;
        cin>>currAns;

        currMax = max(currMax, currAns);
    }

    if(currMax > 0)
        ans = "HARD";
    else
        ans = "EASY";

    cout<<ans<<endl;
    
    return 0;
}
