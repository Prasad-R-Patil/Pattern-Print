/*

*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*




*/

#include<iostream>
using namespace std;
 
 
int main()
{

    int n = 0;
    cout<<"enter value of n  => ";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }

    for(int i2=1; i2<=n; i2++)
    {
        for(int k=1; k<=n; k++)
        {
            if(i2+k<=n)
            {
                cout<<"* ";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }


 
 
 
 return 0;
}