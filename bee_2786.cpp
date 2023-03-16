#include<iostream>
using namespace std;
int main()
{
    int l , w , squares, triangles;
    cin >> l >> w;
    squares = (l*w) + ((l-1) * (w-1));
    triangles = (l-1)*2 + (w-1)*2;
    cout << squares << endl;
    cout << triangles << endl;
    return 0;
}