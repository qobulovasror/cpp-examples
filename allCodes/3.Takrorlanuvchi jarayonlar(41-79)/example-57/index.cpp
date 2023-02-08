// 57. 1 dan n gacha Fibonachchi sonlarni ekranga chiqaring. Uchinchidan boshlab Fibonachchi sonlar ketma-ketligining har biri oldingi ikkita sonlar yig’indisiga teng. (1,1,2,3,5,8,13,….n)
#include <iostream>
using namespace std;
int main()
{ int a=1,b=1,n,c;
    cout<<"n=";cin>>n;
    cout<<1<<endl;
    cout<<12<<endl;
    for(int i=0;i<=n;i++)
    { c=a+b;
        cout<<c<<endl;
        a=b;b=c;
        if(c>=n)
            break;}
    return 0;
}
