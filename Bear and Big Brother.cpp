#include <iostream>
using namespace std;
int main() {
    int a, b, count = 0;
    cin>>a>>b;

    if(a > b)
        cout<<count<<endl;
    else 
    {
        while(a <= b)
        {
            a *= 3;
            b *= 2;
            count++;
        }
    }

    cout<<count<<endl;
}
