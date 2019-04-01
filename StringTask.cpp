#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    string s_word;
    cin >> s_word;
    int i_length=s_word.size();
   for(int i=0;i<i_length;i++)
   {
        s_word[i]=tolower(s_word[i]);//tolower() 大写字母转化为小写字母，对char有效
        if(s_word[i]=='a'||s_word[i]=='i'||s_word[i]=='u'||s_word[i]=='o'||s_word[i]=='e'||s_word[i]=='y')
            continue;
        else 
        {
            cout << '.'
                 << s_word[i];
        } 
   }
   return 0;

    

}
