#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double oldPrice, newPrice, increased;
    cout << fixed << showpoint << setprecision(2);
    cin>>oldPrice>>newPrice;
    increased = (newPrice - oldPrice)/oldPrice * 100.00;
    cout << increased << "%" << endl;
    return 0;
}