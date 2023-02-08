// 83. Butun sonli bir o’lchovli massivdan, berilgan songa teng bo’lgan, agar u bor bo’lsa,  elementni o’chiring. Agar bunday elementlar bir nechta bo’lsa, u holda oxirgi topilganini o’chiring.
#include <iostream>
using namespace std;
int main()
{
    int i,s=0,n,m;
    cout<<"n=";cin>>n;
    int A[n];
    cout<<"m=";cin>>m;
    for(i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        A[i]=t;
        if(t==m)
        	++s;
    }
    if(s>1)
    for(i=0;i<n;i++)
    {
        cout<<B[j]+C[j]<<",";
    }
    
    return 0;
}
