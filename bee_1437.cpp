#include<iostream> 
#include<cstring>
using namespace std;
int main()
{
    int n, count, i, j;
    char x;
    while(scanf("%d ", &n)){
        if(n==0) break;
        count = 0;
        char ara[n];
        for(i=0; i<n; i++){
            cin >> ara[i];
            if(ara[i] == 'D') count = count + 1;
            else if(ara[i] == 'E') count = count - 1;
        }
        if(count > 4 ) count = count % 4;
        else if(count < -4 ) count = (abs(count) % 4) * (-1);

        if(count == 0 || count == 4 || count == -4) cout << "N" << endl;
        else if(count == 1 || count == -3) cout << "L" << endl;
        else if(count == 2 || count == -2) cout << "S" << endl;
        else if(count == 3 || count == -1) cout << "O" << endl;
    }
    return 0;
}