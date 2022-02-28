#include <iostream>
using namespace std;
int main() {
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = k * l;
    int toasts1 = drink/nl;

    int toasts2 = c * d;
    int toasts3 = p/np;

    int mini = min(toasts1, min(toasts2, toasts3));

    int ans = mini/n;

    cout<<ans<<endl;
}
