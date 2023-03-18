#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int amount, speedupday, page;
    int count;
    while (cin >> amount)
    {
        if(amount == 0) break;
        cin >> speedupday >> page;
        count = (amount*speedupday*page)/abs(amount - page);
        if (count == 1)
            cout << count << " pagina" << endl;
        else
            cout << count << " paginas" << endl;
    }
    return 0;
}