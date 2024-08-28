/*

        5
      * 4 *
    * * 3 * *
  * * * 2 * * *
* * * * 1 * * * *




*/


#include<iostream>
using namespace std;
 
 
int main()
{
 
    int n=0;
    cout<<"enter value of n  => ";
    cin>>n;

    int cnt = n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<n; j++)
        {
            if(i+j>=n+1)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }

        for(int k=1; k<=n; k++)
        {
            if(k == 1)
            {
                cout<<cnt<<" ";
                cnt--;
            }
            if(i>k)
            {
                cout<<"*"<<" ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
 
 
 return 0;
}