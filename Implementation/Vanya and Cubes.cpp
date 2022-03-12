#include <iostream>
using namespace std;
int main() {
    int n, i = 0, last = 0, curr = 0;
    cin>>n;
    
    while(n > 0)
    {
        i++;
        curr = last + i;
        last = curr;

        n -= curr;

        if(n < 0)
            i--;
    }

    cout<<i;

    return 0;
}
