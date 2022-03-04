#include <iostream>
using namespace std;
int main() {
    int n, a;
    cin>>n;

    int person[n];

    for(int i = 1; i <= n; i++)
    {    
        cin>>a;
        person[a] = i;
    }
    for(int i = 1; i <= n; i++)
    {
        cout<<person[i]<<" ";
    }

    return 0;
}
