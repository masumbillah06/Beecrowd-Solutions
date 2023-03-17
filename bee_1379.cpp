#include<iostream>
using namespace std;
int main()
{
    long long a, b , c;
    while (cin>>a>>b)
    {
        if(a==0 && b==0) break;
        c = a - (b-a);
        cout << c << endl;
    }
    return 0;
}