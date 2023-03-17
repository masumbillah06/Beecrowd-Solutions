#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i, j, num, tcase;
    long long sum;
    cin >> tcase;
    while(tcase--){
        cin >> num;
        sum = 0;
        for(i=1; i<=num; i++){
            sum = sum + pow(2,i-1);
        }
        cout << sum << endl;
    }
    return 0;
}