#include<iostream>
using namespace std;
int main()
{
    int a[10],beg=0,end=9,item,i,mid;
    cout<<"enter 10 elements \n";
    for(i=0;i<=9;i++)
    {cin>>a[i];
}
cout<<"enter the number to be searched";
cin>>item;
mid=(beg+end)/2;
while(a[mid]!=item && (beg<=end))
{
    if(a[mid]<item)
    {
        beg=mid+1;

    }
    else
    {
        end=mid-1;
    }
    mid=(beg+end)/2;
    }
    if(a[mid]==item)
    {
        cout<<"successful search :  "<<mid;
    }
    else
    {
        cout<<"item not found";
    }}

