#include <bits/stdc++.h>
using namespace std;
int main() {
    string sum;
    cin>>sum;
    int n = sum.size(), j = 0;
    char numArr[100];

    for(int i = 0; i < n; i += 2)
    {
        if(sum[i] != '+')
        {
            numArr[j] = sum[i];
            j++;
        }
    }

    sort(numArr, numArr + j);

    for(int i = 0; i < j; i++)
    {
        if(i == j - 1)
            cout<<numArr[i]<<endl;
        else
            cout<<numArr[i]<<"+";
    }

    return 0;
}
