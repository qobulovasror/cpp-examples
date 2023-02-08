// 27. Kiritilgan tinish belgilarining nomlarini ekranga chiqaradigan dastur tuzing. Masalan, nuqta kiritilsa “Bu nuqta” chiqishi kerak.
#include <iostream>
using namespace std;
int main()
{   char a;
    cout<<"tinish belgi kiriting-";cin>>a;
    if(a=='"')cout<<"qo'shtirnoq";
    else{if((a=='{')||(a=='}'))
    cout<<"figurali qavs";
    else{if((a=='[')||(a==']')||(a=='(')||(a==')'))
    cout<<"qavs"; else
    {if(a=='^') cout<<"urg'u belgisi";
    else{ if(a=='-')
   cout<<"chiziq"; else
  {if(a=='#') cout<<"panjara";
   else{ if(a=='/')
 cout<<"qiya chiziq"; else
  {if(a=='`')cout<<"apostrop";
  else { if(a==';')
  cout<<"nuqta vergul";
  else {if(a==':') cout<<"ikki nuqta";
  else  { if(a=='.')  cout<<"nuqta";
   else{  if(a=='?') cout<<"so'roq";
  else { if(a=='!') cout<<"undov";
  else{if(a=='&') cout<<"ampersan";
  else{if(a=='=') cout<<"teng";
  else{if(a=='<') cout<<"kichik";
  else{if(a=='>') cout<<"katta";
  else{if(a=='_') cout<<"pastki chiziq";
  else cout<<"tinish belgi xato";
}}}}}}}}}}}}}}}}}return 0;}
