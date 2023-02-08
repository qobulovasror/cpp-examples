// 99. A[n,m] va B[n,m] ikki o’lchamli massivlar berilgan. Bu massivlarni qo’shish natijasida C[n,m] ikki o’lchamli massivni hosil qiling.
#include <iostream>
using namespace std;
int main()
{
    const int s=100;
    int i,j,m,n,A[s][s],B[s][s],C[s][s];
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    cout<<"A[n][m]-massiv\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }cout<<"B[n][m]-massiv\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>B[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    }cout<<endl<<"C[n][m]"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<C[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}
