// 6.  Radiusi R ga teng bo’lgan aylananing uzunligi va shu aylana bilan chegaralangan doiraning yuzasini topish algoritmni tuzing.
#include <iostream>
#include <cmath>
using namespace std;
int main()
{ float  R,l,S;
    const int pi=3.14;
    cout<<"radusi=";cin>>R;
    l=2*pi*R;  S=pi*pow(R,2);
    cout<<"aylananing uzunligi="<<l<<endl;
    cout<<"doiraning yuzasi="<<S;
    return 0;  
}
