#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int l, r;
        cin>>l>>r;

        int x = 0, y = 0;

        if(l * 2 <= r)
        {
            x = l;
            y = 2 * l;
        }
        else
        {
            x = -1;
            y = -1;
        }

        cout<<x<<" "<<y<<endl;
    }

    return 0;
}
