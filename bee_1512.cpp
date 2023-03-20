#include<iostream>
using namespace std;
int main()
{
    int n , a , b, temp, lcm, mltpl, swap, count;
    while (cin >> n >> a >> b)
    {
        if(a==0 && b==0 && n==0) break;
        count == 0; temp = 0; swap = 0; lcm = 0; mltpl = 0;
        count = (n/a) + (n/b);
        mltpl = a*b;
        if(a<b){
            swap = b;
            b = a;
            a = swap;
        }
        while(b != 0){
            temp = a%b;
            a = b;
            b = temp;
        }
        lcm = mltpl/a; // here a contains the gcd of a and b.
        count = count - (n/lcm);
        cout << count << endl;
    }
    return 0;
}