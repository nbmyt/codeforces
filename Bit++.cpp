#include <iostream>
using namespace std;
int main()
{
    string s_bit;
    int i_n;
    cin >> i_n;
    cin.get();
    int i_num=0;
    while(i_n--)
    {
    getline(cin,s_bit);
    if(s_bit=="X++"||s_bit=="++X")
        i_num++;
    else if(s_bit=="--X"||s_bit=="X--")
        i_num--;
    }
    cout << i_num
         << endl;
    return 0;
        
}
