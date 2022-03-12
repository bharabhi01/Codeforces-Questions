#include <iostream>
using namespace std;
int main() {
    int n, j = 0;
    cin>>n;

    string s, ans = "";
    cin>>s;

    if(n == 1)
        cout<<s<<endl;
    else 
    {
        for(int i = 0; i < n; i++)
        {
            char ch = s[i];
            ans += ch;

            i += j;
            j++;
        }

        cout<<ans<<endl;
    }
    
    return 0;
}
