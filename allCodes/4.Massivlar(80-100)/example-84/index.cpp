// 84. Sonli massiv berilgan. Unda bir xil qo’shni elementlar juftligi qanchaligini toping.
#include <iostream>
using namespace std;
int main()
{  const int c=100;
    int A[c],i,s=0,n;
    cout<<"O'lchami=";cin>>n;
    for(i=0;i<n;i++)
    {  cout<<i+1<<"-son=";
        cin>>A[i]; }
     for(i=1;i<=10;i++)
       { if(A[i]==A[i+1])
        s++;}if(s>0)
       { cout<<"bir xil qo’shni ";
          cout<<"elementlar juftligi="<<s;
       }else {cout<<"bir xil qo’sh";
        cout<<"ni elementlar juftligi yuq";}
    return 0;}
