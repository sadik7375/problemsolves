#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    { 
        int n,a=0,b=0;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++)
        {
            
            cin>>arr[i];
        }
        
        for(int i=1;i<=n;i++)
        { 
           
           
           	   if(i%2==arr[i]%2)
           	   {
           	   	   if(i%2==0)
           	   	   {  a++;
						 }
                     else{
                     	
                     	b++;
					 }              	   	
           	   	
				  }
           	}
           	 
          
        if(a==b)
        {cout<<a<<endl;}

		else{
			cout<<"-1"<<endl;}
        
        
       
    }

    return 0;
}

