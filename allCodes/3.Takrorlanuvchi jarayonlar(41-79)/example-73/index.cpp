// 73. 100 ta birinchi tub son topilsin
#include <iostream>
using namespace std;
int main()
{   int i,p,k=0,j;
    bool t=false;
    cout<<"2,";
    for(i=1;i<=999;i++)
    { for(j=2;j<i;j++) {
    p=i%j; if(p>0)
    t=true; else {
    t=false; break;
    } p=0;
    }if(t==true) {
    cout<<i<<",";k++;
    if(k==100){
    break;break; } }}
    return 0; }
