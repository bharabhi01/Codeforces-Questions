#include <iostream>
using namespace std;
int main() {
    string s, ans = "";
    cin>>s;

    int n = s.size(), j = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' 
        || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            continue;
        else
        {
            ans += ".";
            ans += tolower(s[i]);
        }
    }

    cout<<ans<<endl;
}
