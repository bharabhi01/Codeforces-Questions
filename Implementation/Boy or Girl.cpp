#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    cin>>name;
    int n = name.length();
    int ans = 0;

    sort(name.begin(), name.end());

    for(int i = 1; i < n; i++)
    {
        if(name[i] != name[i - 1])
            ans++;
    }

    if(ans & 1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
