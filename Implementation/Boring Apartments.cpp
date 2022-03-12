#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int digit = n % 10;
        int count = 0;

        while(n > 0)
        {
            n /= 10;
            count++;
        }

        if(count == 1)
            cout<<((digit * 10) - 10) + 1<<endl;
        else if(count == 2)
            cout<<((digit * 10) - 10) + 3<<endl;
        else if(count == 3)            
            cout<<((digit * 10) - 10) + 6<<endl;
        else if(count == 4)
            cout<<((digit * 10) - 10) + 10<<endl;
    }

    return 0;
}
