#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    string ans;
    int n = s.length();

    int firstDigit = s[0] - '0';

    if(firstDigit == 9)
        s[0] = '9';
    else 
    {
        if(firstDigit > 4)
            s[0] = ((9 - firstDigit) + '0');
    }

    for(int i = 1; i < n; i++)
    {
        int digit = s[i] - '0';

        if(digit < 5 || digit == 0)
            continue;
        else
            s[i] = ((9 - digit) + '0');
    }
    cout<<s<<endl;
}
