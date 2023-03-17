#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int runtime, brazil, germany ; 
    double avg;
    while(true){
        cin >> runtime;
        avg = 0.0;
        if(runtime == 0) break;
        else{
            avg = runtime/90.0;
            brazil = floor(avg*1);
            germany = ceil(avg*7);
            cout << "Brasil " << brazil << " x Alemanha " << germany << endl;
        }
    }
    return 0;
}