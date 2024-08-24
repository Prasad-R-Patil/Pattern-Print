/*

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *



*/



#include<iostream>
using namespace std;
 
 
int main()
{

    int n = 0;
    cout<<"enter value of n  ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int spece=n-i; spece>0; spece--)
        {
            cout<<"  ";
        }
        
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }

        for(int k=1; k<=i-1; k++)
        {
            cout<<"* ";
        }

        cout<<endl;


    }
 
 
 
 return 0;
}