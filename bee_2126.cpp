#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string paragraph, word;
    int i, j, k, count_1 = 0, count_2 = 0;
    int casenum=1,  pos=0;
    while (cin >> word >> paragraph)
    {
        for (i = 0; i < paragraph.length(); i++)
        {
            if (word[0] == paragraph[i])
            {
                for (j = i, k = 0; k < word.length(); j++, k++)
                {
                    if (word[k] == paragraph[j])
                    {
                        count_1++;
                        if (count_1 == word.length())
                        {
                            pos = i;
                            count_2++;
                        }
                    }
                    else
                        break;
                }
            }
            count_1 = 0;
        }
        if(count_2 == 0){
            cout << "Caso #" << casenum << ":" << endl;
            cout << "Nao existe subsequencia" << endl << endl;
        }
        else{
            cout << "Caso #" << casenum << ":" << endl << "Qtd.Subsequencias: " << count_2 << endl;
            cout << "Pos: " << pos + count_1 + 1 << endl << endl;
        }
        count_1 = 0;
        count_2 = 0;
        casenum++;
    }
    return 0;
}