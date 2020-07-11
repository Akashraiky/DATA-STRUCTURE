#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,c=0;
    long a[10];
    cout<<"Enter Salaries of 10 employee per annum :"<<endl;
    for(i=0;i<10;i++)
    {
       cin>>a[i];
       if(a[i]>100000)
       {
	  c=c+1;
       }
    }
    cout<<"No. of salaries greater than 1 lakhs are :"<<c<<endl;
    getch();
}
