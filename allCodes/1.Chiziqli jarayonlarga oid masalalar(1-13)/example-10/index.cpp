// 10. Silindrning balandligi H ga va asosi radiusi Rga teng bo’lsa, uning hajmini topish dasturini tuzing.
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float H,R,V;
    const float pi=3.14;
    cout<<"balandligi=";cin>>H;
    cout<<"asosi radiusi=";cin>>R;
    /*silindrning hajmi asosining
    yuzi bilan balandligining
    kopaytmasiga teng*/
    V=pi*R*R*H;
    cout<<"Silindr hajmi="<<V;
    return 0;
}
