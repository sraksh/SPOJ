#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,i,l,t,j,k,sum,p,m,a[1000],b[1000],c[1000];
    cin>>m;
    for(p=1;p<=m;p++)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(j=0;j<n;j++)
        {
            cin>>b[j];
        }
        sort(b,b+n);
        k=0;sum=0;
        for(i=0,j=0;i<n,j<n;i++,j++)
        {
            c[k]=a[i]*b[j];
            k++;
        }
     for(k=0;k<n;k++)
     {
        sum=sum+c[k];
     }
    cout<<sum<<endl;
   }
return 0;
}
