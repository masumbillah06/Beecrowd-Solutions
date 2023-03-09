#include <iostream> //undone
using namespace std;
int main()
{
    int n, i, j, count;
    int casenum = 1;
    while (cin >> n)
    {
        int ara[20101];
        if (n == 0)
            cout << "Caso " << casenum << ": " << 1 << " numero" << endl << 0 << endl << endl;
        else
        {
            count = 0;
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    ara[count] = i;
                    count++;
                }
            }
            cout << "Caso " << casenum << ": " << count + 1 << " numeros" << endl;
            cout << 0;

            for (i = 0; i < count; i++)
            {
                cout << " " << ara[i];
            }
            cout << endl << endl;
        }
        casenum++;
    }
    return 0;
}