#include<iostream>
using namespace std;
#include<conio.h>
main()
{

int abb[4];
int r;
int initial=0;
int final=4;
int mid;
int location=-5;
cout<<"Enter 5 numbers to store in array: "<<endl;

for(int i=0; i<5; i++)
{
cin>>abb[i];
}
cout<<endl;
cout<<"Enter the number you want to found :";
cin>>r;
cout<<endl;

while(initial<=final)
{
mid= (initial+final)/2;

if(abb[mid]==r)
{
location=mid;
break;
}
if(r<abb[mid])
final=mid-1;

if(r>abb[mid])
initial=mid+1;
}
if(location==-5)
cout<<" Required number not found "<<endl;
else
cout<<" Required number is found at index "<<location<<endl;

getch();
}
