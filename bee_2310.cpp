#include<bits/stdc++.h> // undone
using namespace std;
int main()
{
    int tcase;
    cin >> tcase;
    string name;
    double serve, block, attack, s_serve, s_block, s_attack;
    double sum_serve = 0.00, sum_block = 0.00, sum_attack = 0.00;
    double s_sum_serve = 0.00, s_sum_block = 0.00, s_sum_attack = 0.00;
    while (tcase--)
    {
        cin.ignore();   
        cin >> name;
        cin >> serve >> block >> attack >> s_serve >> s_block >> s_attack;
        
        sum_serve += serve;
        sum_block += block;
        sum_attack += attack;
        s_sum_serve += s_serve;
        s_sum_block += s_block;
        s_sum_attack += s_attack;
    }
    
    
    cout << fixed << showpoint << setprecision(2);
    cout << "Pontos de Saque: " << (s_sum_serve/sum_serve) * 100.00 << " %." << endl;
    cout << "Pontos de Bloqueio: " << (s_sum_block/sum_block) * 100.00 << " %." << endl;
    cout << "Pontos de Ataque: " << (s_sum_attack/sum_attack) * 100.00 << " %." << endl;
    return 0;
}