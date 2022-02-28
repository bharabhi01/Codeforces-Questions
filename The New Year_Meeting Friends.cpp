#include <iostream>
using namespace std;
int main() {
    int x1, x2, x3;
    cin>>x1>>x2>>x3;

    int ans;
    int dist1, dist2, dist3;

    if(x1 > x2)
        dist1 = x1 - x2;
    else
        dist1 = x2 - x1;

    if(x2 > x3)
        dist2 = x2 - x3;
    else
        dist2 = x3 - x2;

    if(x3 > x1)
        dist3 = x3 - x1;
    else
        dist3 = x1 - x3;

    ans = max (dist1, max(dist2, dist3));

    cout<<ans<<endl;

    return 0;
}
