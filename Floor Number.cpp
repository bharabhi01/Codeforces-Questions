#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n, x;
        cin>>n>>x;

        int count = 2;
        int floor = 1;

        while(count < n)
        {
            count += x;
            floor++;
        }

        cout<<floor<<endl;
    }

    return 0;
}
