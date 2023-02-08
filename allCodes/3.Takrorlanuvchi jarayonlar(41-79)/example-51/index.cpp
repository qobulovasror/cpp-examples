// 51. Klaviaturadan kiritilgan musbat sonlar yig’indisini toping. Ketma-ketlik oxirini bildiruvchi nol kiritilishi bilan natijani hisoblashga da’vat bo’ladi
#include <iostream>
using namespace std;
int main()
{  int i,s=0;
    while(i)
    { cin>>i;
    if(i>0)
    {    if(i!=0)
      s=s+i;    else return 1;
    } }
cout<<"musbat sonlar yig'indisi="<<s;
    return 0; }
