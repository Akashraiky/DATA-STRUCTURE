#include<iostream.h>
#include<conio.h>
void main()
{
   clrscr();
   int i,l=0;
   char t,n[10],on[10],rn[10];
   cout<<"Enter the characters of string "<<endl;
   cin>>n;
   for(i=0;n[i]!='\0';i++)
   {
   on[i]=n[i];
   l++;
   }
   for(i=0;i<l;i++)
   {
      rn[l-1-i]=n[i];
   }
   cout<<"String original : "<<endl;
   for(i=0;i<l;i++)
   {
      cout<<on[i];
   }
   cout<<"\nString reversed : ";
   for(i=0;i<l;i++)
   {
      cout<<rn[i];
   }
   int count=0;
   for(i=0;i<l;i++)
   {
      if(rn[i]==on[i])
      count++;
   }
   if(count==l)
   cout<<"\nString is Pallindrome "<<endl;
   else
   cout<<"\nString is not pallindrome "<<endl;
   getch();
}
