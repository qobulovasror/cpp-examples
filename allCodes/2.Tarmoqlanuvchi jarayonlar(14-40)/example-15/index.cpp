// 15. Olma a so’m turadi va undan m kg xarid qilindi. Nok b so’m turadi va undan n kg xarid qilindi. Qaysiga ko’proq pul sarflanganini aniqlash dasturini tuzing.
#include <iostream>
using namespace std;
int main()
{
    float a,b,n,m,x,y;
    cout<<"olma necha so'm=";cin>>a;
    cout<<"xarid qilingan olma (kg da)=";cin>>m;
    cout<<"nok necha so'm=";cin>>b;
    cout<<"xarid qilingan nok (kg da)=";cin>>n;
    x=a*m;
    y=b*n;
    if(x>y)
        cout<<"olmaga ko'p pul sarflangan";
    else
    {   if(x<y)
            cout<<"nokga ko'p pul sarflangan";
        else cout<<"ikkalasiga teng pul sarflangan";  }
    return 0;   }
