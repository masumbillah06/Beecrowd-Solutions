#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    int ara[n];
    int sum = 0;
    for(i=0; i< n; i++){
        cin>> ara[i];
        sum = sum + ara[i] / 3;
    }
    cout << sum*3 << endl;
    return 0;
}