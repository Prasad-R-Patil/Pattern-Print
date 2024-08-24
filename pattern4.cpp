/*

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
    cout<<"enter value of n   ";
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for(int spece=0; spece<i; spece++)
        {
            cout<<"  ";
        }
        for(int j=1; j<=n-i+1; j++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}
