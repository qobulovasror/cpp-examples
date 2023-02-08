// 81. Berilgan sondan katta bo’lgan, A massivning hamma elementlarini yig’indisini toping.
#include <iostream>
#include <time.h>
using namespace std;
int main()
{ const int c=10;
    int A[c],i,n,s=0;//s rand(time(NULL));
    cout<<"n=";cin>>n;
    cout<<"massiv tasodifiy songa tuldirildi\n";
    for(i=0;i<10;i++)
    { A[i]=rand()%10;
        cout<<A[i]<<",";
    } cout<<endl;
    for(i=0;i<10;i++)
    { if(A[i]>n)
            s+=A[i];}
    cout<<"yigindi="<<s;
    return 0;
}
