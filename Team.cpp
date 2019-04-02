#include <iostream>
using namespace std;
int main()
{
    int i_n;
    cin >> i_n;
    int i_re=0;
    while(i_n--)
    {
        int i_Petya;
        int i_Vasya;
        int i_Tonya;
        cin >> i_Petya
            >> i_Vasya
            >> i_Tonya;
        if(i_Petya+i_Vasya+i_Tonya>1 )
            i_re++;
    }
    cout << i_re
         << endl;
    return 0;
}
