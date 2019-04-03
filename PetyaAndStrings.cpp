#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    string s_A;
    string s_B;
    getline(cin,s_A);
    getline(cin,s_B);
    int length=s_A.size();
    while(length--)
    {
        s_A[length]=tolower(s_A[length]);
        s_B[length]=tolower(s_B[length]);
    }
     if(s_A==s_B) 
         cout << '0'; 
     else if(s_A<s_B) 
         cout << "-1"; 
     else cout << "1"; 
    return 0;
}
