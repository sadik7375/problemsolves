#include <bits/stdc++.h>


using namespace std;

int main()
{

    int n;
    cin>>n;
    int s=0,d=0,right=n-1,left=0,turn=0;

    int arr[n];
    for(int i=0;i<n;i++)
        {cin>>arr[i];}
  while(n!=0)
  {


      if(turn%2==0)
      {
          if(arr[left]>arr[right]);
          {   s +=arr[left];
              left++;
              }
           else{
            d +=arr[right];
             right--;}
             }

      else{
           if(arr[left]>arr[right])
           {
               d +=arr[left];
                left++;
           }
           else{
             d +=arr[right];
               right--;
           }
        }
n--;
turn++;
  }



    cout<<s <<" "<<d<<endl;


    return 0;
}
