// 40. XOY tekislikda A nuqta o’zining koordinatalari bilan berilgan. U qayerda joylashganligini ko’rsating (qaysi o’qda yoki qaysi chorakda).
#include <iostream>
using namespace std;
int main()
{ float x,y;
    cout<<"A nuqta koordinatalari"<<endl;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    if(x==0&&y==0)
    cout<<"koordinata bosida";
    else{ if((x>0)&&(y>0))
    cout<<"A ikkinchi chorakda";
    else{if((x<0)&&(y>0))
    cout<<"A birinchi chorakda";
    else{if((x>0)&&(y<0))
    cout<<"A uchinchi chorakda";
    else{ if((x<0)&&(y<0))
    cout<<"A to'rtinchi chorakda";
    else{ if((x!=0)&&(y==0))
    cout<<"Ox o'qida yotadi";
    else { if((x==0)&&(y!=0))
    cout<<"Oy o'qida";}}
    }}}}return 0; }
