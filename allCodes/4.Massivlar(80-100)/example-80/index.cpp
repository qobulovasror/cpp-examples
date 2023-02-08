// 80. Massivning juft va toq o’rnidagi elementlarini almashtiring.
#include <iostream>
#include <time.h>
using namespace std;
int main()
{ const int c=10;
    int A[c],i,n;//s rand(time(NULL));
    cout<<"massiv tasodifiy songa tuldirildi\n";
    for(i=0;i<10;i++)
    {  A[i]=rand()%10;
        cout<<A[i]<<",";
    }cout<<endl;
    for(i=0;i<10;i++)
    {  A[i]=A[i+1];
        A[i+1]=A[i+2];
    } for(i=0;i<10;i++)
    {  cout<<A[i]<<",";
    }    return 0;}
