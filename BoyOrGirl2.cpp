#include <iostream>
#include <set>
std::set<char> s;//set https://blog.csdn.net/yas12345678/article/details/52601454
int main()
{
    char c;
    while(std::cin>>c)s.insert(c);
    std::cout<<(s.size()&1?"IGNORE HIM!":"CHAT WITH HER");//偶数与1按位与，结果为0，奇数为1
    return 0;
}

