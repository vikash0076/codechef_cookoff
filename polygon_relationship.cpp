#include <iostream>
using namespace std;

int main() {
	// your code goes here
    long long int i,t,j,n,x[100000],y[100000],k,X,Y,sum=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>X>>Y;
            x[i]=X;
            y[i]=Y;
        }
        if(n>=3 && n<=5)
        {
            k=n;
        }
        else if(n>5)
        {
            sum=0;
            while(n>5)
            {
                sum+=n;
                n=n/2;
            }
            sum+=n;
            k=sum;
        }
        cout<<k<<"\n";
        k=0;
    }
    
	return 0;
}
