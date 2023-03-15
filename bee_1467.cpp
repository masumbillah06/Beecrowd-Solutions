#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    while (cin>>a>>b>>c)
    {
        if( (a+b+c == 0) || (a+b+c == 3)) cout << "*" << endl;
        else if((a+b==0) || (a+b==2)) cout << "C" << endl;
        else if((c+b==0) || (c+b==2)) cout << "A" << endl;
        else if((c+a==0) || (c+a==2)) cout << "B" << endl;
    }
    return 0;
}