#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,j,k,n,t,a[1000],x=0,count=0;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    x=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>k)
	        {
	            break;
	        }
	        else
	        {
	            x+=a[i];
	            if(x>k)
	            {
	                count++;
	                x=a[i];
	            }
	        }
	    }
	    count++;
	    if(i<n)
	    {
	        cout<<-1<<"\n";
	    }
	    else
	    {
	        cout<<count<<"\n";
	    }
	    count=0;
	}
	
	return 0;
}
