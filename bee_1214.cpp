#include<iostream>
using namespace std;
int main()
{
    int tcase, num, i, j;
    double sum, avg, perc, count;
    cin >> tcase;
    while (tcase>0)
    {
        sum = avg = perc = count = 0;
        cin >> num;
        double ara[num];
        for(i=0; i<num; i++){
            cin >> ara[i];
            sum = sum + ara[i];
        }
        avg = sum / (double)num;
        for(i=0; i<num; i++){
            if(ara[i] > avg) count ++;
        }
        perc = (count / (double)num) * 100.00;
        printf("%0.3lf%\n",perc);

        tcase--;
    }
    
    return 0;
}