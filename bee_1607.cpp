#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    cin.ignore();
    while (tcase--)
    {
        string first, second;
        cin >> first >> second;
        int steps = 0;
        int sum = 0;
        for(int i=0; first[i] != '\0'; i++){
            sum = second[i] - first[i];
            if(sum < 0) steps = steps + (sum + 26);
            else steps = steps + sum;
        }
        cout << steps << endl;
    }
    return 0;
}