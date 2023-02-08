// 100.    Ikki o’lchamli massivning k-satri elementlariga p-satr elementlarini qo’shish natijasida olingan barcha qiymatlarni chop eting.
#include <iostream>
using namespace std;
int main()
{
    const int s=100;
    int i,j,m,n,A[s][s],k,p,B[s],C[s];
    cout<<"n=";cin>>n;
    cout<<"m=";cin>>m;
    cout<<"k=";cin>>k;
    cout<<"p=";cin>>p;
    cout<<"A[n][m]-massiv\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>A[i][j];
            if(i+1==k)
                B[j]=A[i][j];
            else{
                if(i+1==p)
                    C[j]=A[i][j];
            }
        }
    }for(j=0;j<n;j++)
    {
        cout<<B[j]+C[j]<<",";
    }
    return 0;
}
