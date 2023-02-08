// 58. n natural son berilgan. n soni Fibonachchi soni hisoblanishini aniqlang, ya’ni bu son 1, 1, 2, 3, 5, 8, 13, 21, 34, … ketma-ketlik elementi hisoblansa.
#include <iostream>
using namespace std;
int main()
{ int a=1,b=1,n,s=0,c;
    cout<<"n=";cin>>n;
    for(int i=0;i<=n;i++)
    { c=a+b; s++;
      a=b;b=c;  if(c==n)
        cout<<s<<"-hadi"; if(c>n)
      { cout<<"fibunachi son emas";
           break; } } return 0; } 
