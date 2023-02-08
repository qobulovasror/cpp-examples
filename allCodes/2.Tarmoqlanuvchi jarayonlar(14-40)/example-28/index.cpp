// 28. Kiritilgan har bir raqam (0-9) uchun, ularga mos ingliz tilidagi nomlarini (0-zero, 1-one, 2-two...) chiqaring.
#include <iostream>
using namespace std;
int main()
{ int x;
   cout<<"0-9 oraliqda son kiriting=";cin>>x;
   if((x>=0)&&(x<10))
   {if(x<5){
    if(x==0) cout<<"zero";
    else{if(x==1)cout<<"one";
    else{if(x==2)cout<<"two";
    else{ if(x==3) cout<<"thee";
    else cout<<"four";}}}}
    else{if(x==5)cout<<"five";
    else{ if(x==6)cout<<"six";
    else{if(x==7)cout<<"seven";
    else {if(x==8)cout<<"eight";
    else cout<<"nine";}}}}}
    else cout<<"son xato";
    return 0; }
