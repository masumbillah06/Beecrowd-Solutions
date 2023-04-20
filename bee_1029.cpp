#include<bits/stdc++.h>
using namespace std;

int fibo_count = 0;

int fibo(int n){
    fibo_count++;
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else return fibo(n-1) + fibo(n-2);
}
int main()
{
    int tcase;
    cin >> tcase;
    while (tcase--)
    {
        int num;
        fibo_count = 0;
        cin >> num;
        int call = fibo(num);
        printf("fib(%d) = %d calls = %d\n", num, fibo_count-1, call);
    }
    return 0;
}