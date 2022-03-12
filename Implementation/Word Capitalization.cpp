#include <bits/stdc++.h>
using namespace std;
int main() {
    string name;
    cin>>name;
    
    if(islower(name[0]) == 0)
        cout<<name;
    else
    {
        name[0] = toupper(name[0]);
        cout<<name;
    }

    return 0;
}
