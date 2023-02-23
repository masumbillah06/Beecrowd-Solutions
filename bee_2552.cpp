#include<iostream>
#include<iomanip>
#define x 105
using namespace std;
int main()
{
    int i, j, k, count, r, c;
    while (cin >> r >> c){
        int ara[x][x];
        for(i=0; i<x; i++){
            for(j=0; j<x; j++){
                ara[i][j] = 55;
                if(i>0 && i<=r && j>0 && j<=c) cin >> ara[i][j];
            }
        }
        for(i=1; i<=r; i++){
            for(j=1; j<=c; j++){
                if(ara[i][j]==1) cout << "9" ;

                else{
                    count = 0;
                    if(ara[i+1][j]==1)  count ++;
                    if(ara[i-1][j]==1)  count ++;
                    if(ara[i][j+1]==1)  count ++;
                    if(ara[i][j-1]==1)  count ++;
                    cout << count ;
                }
            }
            cout << endl;
        }
    }
    return 0;
}