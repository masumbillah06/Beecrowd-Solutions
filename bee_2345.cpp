#include<iostream>
using namespace std;
int main()
{
    int ara[4];
    int i, j, temp;

    for(i=0; i<4; i++) cin >> ara[i];

    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(ara[i] < ara[j]){
                temp = ara[j];
                ara[j] = ara[i];
                ara[i] = temp;
            }
        }
    }
    cout << (ara[0]+ara[3]) - (ara[1]+ara[2]) << endl;
    return 0;
}