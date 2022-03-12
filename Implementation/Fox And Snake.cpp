#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin>>n>>m;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            bool isSnake = false;
            
            if(i % 2 == 1)
                isSnake = true;
            else
            {
                if(i % 4 == 2)
                    isSnake = (j == m);
                if(i % 4 == 0)
                    isSnake = (j == 1);
            }

            cout<<(isSnake ? "#" : ".");
        }

        cout<<endl;
    }

    return 0;
}
