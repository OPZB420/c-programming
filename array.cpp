
#include<string.h>

int main()
{
    char str[3][31],ch;
    int i,j,k,len;
    cout<<"Enter 3 strings \n";
    for(i=0;i<3;i++)
    {
        cin.getline(string[i],31);
    cout<<"\n The list of original strings follows :";
    }
    for (i=0;i<3;i++)
    {
        len=strlen(string[i]);
        for(j=0,k=len-1;j<len/2;j++,k--)
        {
            ch=string[i][j];
            string[i][j]=string[i][k];
            string[i][k]=ch;

        }
    }
  cout<<"\n\n The list reversed strings follows :";
  for("i=0;i<3;i++")
   cout<<"\n"<<string[i];
   return 0;
     
}