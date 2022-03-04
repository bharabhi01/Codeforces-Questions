#include <bits/stdc++.h>
using namespace std;
int main() {
    int k, n, w;
    cin>>k>>n>>w;
    int money = 0, borrow;

    for(int i = 1; i <= w; i++)
        money += i * k;

    if(n < money)
        borrow = money - n;
    else 
        borrow = 0;

    cout<<borrow;

    return 0;
}
