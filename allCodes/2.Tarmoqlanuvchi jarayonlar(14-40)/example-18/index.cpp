// 18. Ikki xonali son berilgan. Aniqlang:
// a)  uning raqamlari yig’indisi uchga karraligini;
// b)  uning raqamlari yig’indisi a soniga karraligini.

//a
#include <iostream>
using namespace std;
int main()
{ int n,n2,n1,x;
    cout<<"ikki xonali son kiriting=";cin>>n;
    if(n>0){
    n2=n%10; n1=n/10;  x=n2+n1;
    if(x%3==0)  cout<<"uchga karrali";
    else cout<<"shart bajarilmadi";}
    else cout<<"son xato";
    return 0;  }

// b
#include <iostream>
using namespace std;
int main()
{ int a,n,n2,n1,x;
    cout<<"ikki xonali son kiriting=";cin>>n;
    if(n>9){
    cout<<"ixtyoriy a son kiriting=";cin>>a;
    n2=n%10; n1=n/10; x=n2+n1;
    if(x%a==0) cout<<"a songa karrali";
    else cout<<"shart bajarilmadi";}
    else cout<<"son xato";
    return 0; }
