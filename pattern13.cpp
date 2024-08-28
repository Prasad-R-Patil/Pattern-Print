/*
        E
      * D *
    * * C * *
  * * * B * * *
* * * * A * * * *



*/



#include<iostream>
using namespace std;
 
 
int main()
{
 
 int n = 0;
 cout<<"enter value of n  => ";
 cin>>n;
 char a  = 'A'+n-1;


   

    for(int i = 1; i<=n; i++)
    {
         for(int j1=1; j1<=n-1; j1++)
        {
            if(i+j1>=n+1)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }

        for(int j = 1; j<=n; j++)
        {
            if(j == 1)
            {
                cout<<a<<" ";
                a--;
            }
            if(i > j)
            {
                cout<<"*"<<" ";
            }
            else{
                cout<<"  ";
            }


            
        }
        cout<<endl;
    }
 
 return 0;
}