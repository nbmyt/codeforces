#include <iostream>
#include <cstring>
int main()
{
    using namespace std;
    char s[100];
    int num[26]={0};
    cin.getline(s,100);
    int i=strlen(s);
    while(i--)
    num[s[i]-'a']=1;
    i=26;
    int sum=0;
    while(i--)
        sum+=num[i];
   string s1= sum%2==0?"CHAT WITH HER!":"IGNORE HIM!";
   cout << s1;
    return 0;
}

