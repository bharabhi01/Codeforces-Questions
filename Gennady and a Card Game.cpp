#include <iostream>
using namespace std;
int main() {
    string tableCard, cards;
    cin>>tableCard;

    for(int i = 0; i < 5; i++)
    {
        cin>>cards;
        if(cards[0] == tableCard[0] || cards[1] == tableCard[1])
        {
            cout<<"YES\n";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
