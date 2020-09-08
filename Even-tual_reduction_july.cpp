#include<string>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,i,j,n,k,a[200],flag=0;
	string str;
	
	cin>>t;
	for(k=0;k<t;k++)
	{
	    for(i=0;i<150;i++)
    	{
    	    a[i]=0;
    	}
	    cin>>n;
	    cin>>str;
	    for(i=0;i<n;i++)
	    {
	        j=str[i];
	        a[j]+=1;
	    }
	    for(i=97;i<=122;i++)
	    {
	        if(a[i]!=0 && a[i]%2==0)
	        {
	            flag=0;
	        }
	        else if(a[i]!=0 && a[i]%2!=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"NO"<<"\n";
	    }
	    else
	    {
	        cout<<"YES"<<"\n";
	    }
	    flag=0;
	}
	
	return 0;
}
