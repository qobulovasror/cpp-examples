// 83. Butun sonli bir o’lchovli massivdan, berilgan songa teng bo’lgan, 
//agar u bor bo’lsa,  elementni o’chiring. Agar bunday elementlar bir nechta bo’lsa, 
//u holda oxirgi topilganini o’chiring.

#include <iostream>
using namespace std;
int main()
{
    int i,s=0,n,m,l;
    cout<<"n=";cin>>n;
    int A[n];
    cout<<"m=";cin>>m;
    for(i=0;i<n;i++)
    {
        int t=0;
        cin>>t;
        A[i]=t;
        if(t==m){
        	++s;
        	l=i;
        }
    }
    if(s>0){
    	if(s==1){
    		int k=0;
    		for(i=0;i<n;i++)
		        if(A[i]==m)
		        	k=i;
			for(i=k; i<n-1;i++)
				A[i]=A[i+1];
    	}else{
    		for(i=l;i<n-1;i++)
    			A[i]=A[i-1];
    	}

    	for(i=0;i<n-1;i++)
    		count<<"A["+i+"]= "<<A[i]<<endl;
    	
    }
    count<<"there isn't value";
    return 0;
}
