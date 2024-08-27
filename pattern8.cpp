/*

* * * * * * *
  * * * * * 
    * * * 
      * 
 
 

*/



#include<iostream>
using namespace std;
 
 
int main()
{

    int n = 0 ;
    cout<<"enter value of n  => ";
    cin>>n;


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
          
        }
        for(int k=n-i; k>=1; k--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
 
 
 
 return 0;
}