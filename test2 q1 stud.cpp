#include<stdio.h>
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    char Name[100];
    int RegNo;
    int Chemistry;
    int Maths;
    int Physics;
};
void studin(student &a)
{
    cin>>a.Name>>a.RegNo>>a.Chemistry>>a.Maths>>a.Physics;
}
bool check(student &a)
{
    if((a.Chemistry>=0&&a.Chemistry<=100)&&(a.Maths>=0&&a.Maths<=100)&&(a.Physics>=0&&a.Physics<=100))
    return true;
    else
    return false;
}
int tota(student &a)
{
    int sum=a.Maths+a.Physics+a.Chemistry;
    return sum;
}
main()
 {
     int n;
     cin>>n;
     student arr[n];
     int tot=0,max=0,pos=0;
     for(int i=0;i<n;i++)
     {
         studin(arr[i]);
         if(check(arr[i]))
          {
            tot=tota(arr[i]);
            if(tot>max)
           { 
               max=tot;
               pos=i;
           }       
          }
         else
         cout<<"marks of "<<arr[i].Name<<" is not in range\n";
     }
     cout<<arr[pos].Name<<" has scored highest total "<<max;
     return 0;
 }
