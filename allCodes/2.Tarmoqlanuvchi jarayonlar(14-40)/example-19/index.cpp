// 19. To’rt xonali son berilgan. Aniqlang:
// a)  uning birinchi ikkita raqamlari yig’indisi, uning oxirgi ikkita raqamlarining yig’indisiga tengligini;
// b)  uning raqamlari yig’indisi uchga karraligini;
// v) uning raqamlari ko’paytmasi to’rtga karralagini;
//19-a-masala
#include <iostream>
using namespace std;
int main()
{ int n,n4,n3,n2,n1,x;
    cout<<"to'rt xonali son kiriting=";cin>>n;
    if(n>999){
    n4=n%10; n3=(n/10)%10;
    n2=((n/10)/10)%10;
    n1=n/1000; if((n1+n2)==(n3+n4))
        cout<<"jumla rost teng";
    else cout<<"shart bajarilmad";}
    else cout<<"son xato";
    return 0; }
 
 
//19-b-masala
#include <iostream>
using namespace std;
int main()
{ int n,n4,n3,n2,n1,x;
    cout<<"to'rt xonali son kiriting=";cin>>n;
    if(n>999){
    n4=n%10; n3=(n/10)%10;
    n2=((n/10)/10)%10;
    n1=n/1000; x=n1+n2+n3+n4;
    if(x%3==0)
    cout<<"uchga karrali";
    else cout<<"shart bajarilmad";}
    else cout<<"son xato";
    return 0; }
 
 
//19-v-masala
#include <iostream>
using namespace std;
int main()
{ int n,n4,n3,n2,n1,x;
    cout<<"to'rt xonali son kiriting=";cin>>n;
    if(n>999){
    n4=n%10; n3=(n/10)%10;
    n2=((n/10)/10)%10;
    n1=n/1000; x=n1+n2+n3+n4;
    if(x%4==0)
    cout<<"to'rtga karrali";
    else cout<<"shart bajarilmad";}
    else cout<<"son xato";
    return 0; }
