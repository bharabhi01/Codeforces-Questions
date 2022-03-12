#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    int arr[n], maxHeight = INT_MIN, minHeight = INT_MAX, maxi, mini;

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];

        if(arr[i] > maxHeight)
        {
            maxHeight = arr[i];
            maxi = i;
        }

        if(arr[i] <= minHeight)
        {
            minHeight = arr[i];
            mini = i;
        }
    }

    if(maxi > mini)
        mini++;
    
    int ans = maxi + (n - 1) - mini;

    cout<<ans<<endl;

    return 0;
}
