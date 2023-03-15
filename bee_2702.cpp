#include<iostream>
using namespace std;
int main()
{
    int AvBeef, AvChick, AvPasta, RBeef, RChick, RPasta;
    int notRecive = 0;
    cin >> AvChick >> AvBeef >> AvPasta >> RChick >> RBeef >> RPasta;
    if(AvBeef<RBeef) notRecive = notRecive + RBeef - AvBeef; 
    if(AvChick<RChick) notRecive = notRecive + RChick - AvChick; 
    if(AvPasta<RPasta) notRecive = notRecive + RPasta - AvPasta; 
    cout << notRecive << endl;
    return 0;
}
