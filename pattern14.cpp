/*

        1
      * 2 *
    * * 3 * *
  * * * 4 * * *
* * * * 5 * * * *





*/


#include<iostream>
using namespace std;
 
 
int main()
{
 
    int n=0;
    cout<<"enter value of n  => ";
    cin>>n;

    int cnt = 1;

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
                cnt++;
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