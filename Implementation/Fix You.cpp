#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;

    while(t--)
    {
        char belt[101][101];
        int n, m, count = 0;
        cin>>n>>m;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                cin>>belt[i][j];
            }
        }

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = m - 1; j < m; j++)
            {
                if(belt[i][j] == 'R')
                {
                    count++;
                    belt[i][j] = 'D';
                }
            }
        }

        for(int i = n - 1; i < n; i++)
        {
            for(int j = 0; j < m - 1; j++)
            {
                if(belt[i][j] == 'D')
                {
                    count++;
                    belt[i][j] = 'R';
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}
