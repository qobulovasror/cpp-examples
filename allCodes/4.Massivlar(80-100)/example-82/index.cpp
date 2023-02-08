// 82. Butun sonli bir o’lchovli massivning k-elementini o’chiring
#include <iostream>
#include <time.h>
using namespace std;
int main()
{ const int c=10;
    int A[c],i,n,s=0;
    cout<<"k=";cin>>n;
    cout<<"massiv tasodifiy songa tuldirildi\n";
    for(i=0;i<10;i++)
    { A[i]=rand()%10;
        cout<<A[i]<<",";
    } cout<<endl;
    for(i=0;i<10;i++){
    if(i<n)
    cout<<A[i]<<",";else{
        cout<<A[i+1]<<",";}}
    return 0;
}
