#include<iostream.h>
int main()
{
    float a,b,c,big, big2,big3;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    big=a;
    if(b>big)
     big=b;
     if(c>big)
     big=c;
     if(c>big)
     big=c;
     {
         if(b>c)
         {big2=b;
         big3=c;
         }
         else
         {
             big2=c;
             big3=b;
         }
     }
     else if(b==big)
     {
          if(a>c)
          {
            big2=a;
            big3=c;
          }
          else
          {
              big2=c;
              big3=a;
          }
     }
     else 
     if(c==big)
     {
         if(a>b)
         {
             big2=a;
             big3=b;
         }
         else
         {
             big2=b;
             big3=a;
         }
     }
     cout<<big<<","<<big2<<","<<big3<<"\n";
     return 0;
}
