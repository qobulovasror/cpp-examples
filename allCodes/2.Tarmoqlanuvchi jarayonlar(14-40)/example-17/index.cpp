// 17. Har xil materiallardan iborat jismlarning hajm va og’irliklari berilgan. Qaysi jism materiali katta zichlikka ega?
#include <iostream>
using namespace std;
int main()
{  float m1,m2,h1,h2,z1,z2;
    cout<<"1-material\n";
    cout<<"massasi=";cin>>m1;
    cout<<"hajmi=";cin>>h1;
    cout<<"2-material\n";
    cout<<"massasi=";cin>>m2;
    cout<<"hajmi=";cin>>h2;
    z1=m1/h1;z2=m2/h2;
    if(z1==z2)
        cout<<"ikkala material teng";
    else{  if(z1>z2)
        cout<<"1-material katta";
    else cout<<"2-material";
    } return 0; }
