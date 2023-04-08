#include<bits/stdc++.h> // undone
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int max2 = max(c,d);
    int max1 = max(a,b);
    int min2 = min(c,d);
    int min1 = min(a,b);
    
    int mini = min1+min2;
    int minOfMax = min(max1,max2);
    int side = min(mini, minOfMax);
    cout << side*side << endl;
    return 0;
}