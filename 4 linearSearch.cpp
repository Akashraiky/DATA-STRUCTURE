#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    int i,c=0,t=-1;
    long a[10];
    cout<<"Enter any 10 elements"<<endl;
    for(i=0;i<10;i++)
    {
       cin>>a[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>c;
    for(i=0;i<10;i++)
    {
       if(a[i]==c)
       t=i;
    }
    if(t>=0)
    cout<<"Match Found at : "<<t<<endl;
    getch();
}
