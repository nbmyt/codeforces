#include <iostream>
using namespace std;
int main()
{
    int i_n;
    int i_k;
    int i;
    int i_flag=0;
    cin >> i_n
        >> i_k;
    for(i=0;i<i_n;)
    {
      int i_a;
      cin >> i_a;
      if(i_a>i_flag)
          i++;
      else break;
      if(i==i_k) i_flag=i_a-1;

    }
    cout << i
         << endl;
    return 0;
}
