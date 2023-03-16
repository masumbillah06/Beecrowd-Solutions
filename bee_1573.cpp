#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, b, c, size;
    while(cin >> a >> b >> c){
        if(a == 0 && b == 0 && c == 0) break; 
        size = cbrt(a*b*c);
        cout << size << endl;
    }
    return 0;
}