// 16. A soni b sonining bo’luvchisi ekanligini aniqlang. Agar bu shart bajarilsa, a ning qiymati ikki marta ortsin va ekranda “SHART BAJARILADI”, aks holda b ning qiymati ikki marta kamayib, “SHART bajarilmaydi” yozuvlari chop etilsin.
#include <iostream>
using namespace std;
int main()
{   int A,b;
    cout<<"b ni kiriting=";cin>>b;
    cout<<"A ni kiriting=";cin>>A;
    if(b%A==0)
    { A=A*2; cout<<"shart bajarildi";
    }  else { A=A/2;
          cout<<"shart bajarilmadi";
    } return 0; }
