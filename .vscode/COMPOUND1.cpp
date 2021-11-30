#include<iostream>
using namespace std

int main()
{
    int i,j,k,n,r;
    cout<<"Enter some nos";
    cin>>k>>n>>r;
    for(j=k;j<=n;j++)
    {
        for(i=1;i<=r;i++)
        {
            cout<<i*j<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}