#include<iostream>

using namespace std;
int main()
{
   int num, tot=0;
   cout<<"Enter the Number: ";
   cin>>num;
   while(num>0)
   {
      tot++;
      num = num/10;
   }
   cout<<"\nTotal Digits = "<<tot;
   cout<<endl;
   return 0;
}
    