// 59. [2; n] intervalda bo’luvchilar yig’indisi eng katta bo’lgan natural sonni toping.
#include <iostream>
using namespace std;
int bulinuvchi(int n){
    int s=0;
    for (int i = 1; i <= n; ++i)
        if(n%i==0)
            ++s;
    return s;
}
int main()
{ 
    int n=0;
    cout << "n= "; cin>>n;
    int A[n];
    for (int i = 2; i <= n; i++)
        A[i] = i;
    int maxB = bulinuvchi(A[i]);
    int point = 0;
    for (int i = 1; i < n; i++)
        if(bulinuvchi(A[i])>maxB){
            maxB = A[i];
            point=i;
        } 
    cout << A[point];
    return 0; 
}
