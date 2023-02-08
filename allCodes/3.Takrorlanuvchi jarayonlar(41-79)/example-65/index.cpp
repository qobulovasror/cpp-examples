// 65. Berilgan natural son raqamlarini teskari tartibda almashtiring.
#include <iostream>
using namespace std;
int main()
 {  int a,n;
    cout<<"n=";cin>>n;
    while(n>0)
    {a=n%10;
    cout<<a;
    n=n/10;}
    return 0;  }
