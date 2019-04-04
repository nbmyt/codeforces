#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s.find("0000000",0)==string::npos&&s.find("1111111",0)==string::npos)//查找字符串中是否有字符串s，https://blog.csdn.net/QiHang_QiHang/article/details/78573960
        cout << "NO";
            else cout << "YES";
    return 0;
}
