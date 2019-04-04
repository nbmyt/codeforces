#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s,100);
    for(int i=0;i<int(strlen(s));i+=2)
    {
        int flag=0;
        for(int j=0;j<int(strlen(s))-i-2;j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
                flag=1;
            }
        }
        
        if(!flag) break;

    }
    cout << s
        <<endl;
    return 0;
}
