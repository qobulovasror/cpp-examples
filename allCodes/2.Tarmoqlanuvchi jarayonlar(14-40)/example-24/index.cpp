// 24. Kompyuterga suzish musobaqasi bo’yicha uchta sportchining musobaqa natijalari kiritiladi. Ekranga eng yaxshi natijani tanlovchi va bu natija suzish bo’yicha g’olib suzuvchining natijasi ekanligini chop etuvchi dastur yarating.
#include <iostream>
using namespace std;
int main()
{    int a,b,c;
    cout<<"1-ishtirokchi natijasi=";cin>>a;
    cout<<"2-ishtirokchi natijasi=";cin>>b;
    cout<<"3-ishtirokchi natijasi=";cin>>c;
    if((a>b)&&(a>c))
        {cout<<"eng yaxshi natija-"<<a<<endl<<"g'olib 1-ishtirokchi";}
    else
        {if((b>a)&&(b>c))
        {cout<<"eng yaxshi natija-"<<b<<endl<<"g'olib 2-ishtirokchi";}
    else {if((c>a)&&(c>b))
        {cout<<"eng yaxshi natija-"<<c<<endl<<"g'olib 3-ishtirokchi";}
    else {
        if((a==b)&&(b>c))
            {cout<<"eng yaxshi ikkita bir xil natija-"<<b<<endl<<"g'olib 1 va 2-ishtirokchilar";}
        else {if((c==b)&&(b>c))
            {cout<<"eng yaxshi ikkita bir xil natija-"<<b<<endl<<"g'olib 2 va 3-ishtirokchilar";}
             else {
                if((a==c)&&(c>b))
            {cout<<"eng yaxshi ikkita bir xil natija-"<<b<<endl<<"g'olib 1 va 3-ishtirokchilar";}
}}}}}return 0;}
