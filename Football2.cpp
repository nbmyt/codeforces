#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s_tream;
    getline(cin,s_tream);
    int i_length=s_tream.size();
    int i=2;
    int i_flag=1;
    while(i_length--)
    {
        if(i==s_tream[i_length])
            i_flag++;
        else {
            i=s_tream[i_length];
            i_flag=1;
        }
        if(i_flag==7)
        {
            cout <<"YES"
                << endl;
            break;
        }
    }
    if(i_flag!=7) cout << "NO"
        << endl;
    return 0;
}
