#include<iostream>
#include<math.h>
using namespace std;
int bit(int a, int b){
    int i=0;
    int ans1,ans2=0;
    while (a||b!=0)
    {
        int num1=a&1;
        int num2=b&1;
         ans1=(num1*pow(10,i))+ans1;
         ans2=(num2*pow(10,i))+ans2;
         a=a>>1;
         b=b>>1;
         i++;
    }
    cout<<ans1<<endl<<ans2<<endl;
     int value =0;
     int count =0;
while (ans1>0)
{
    if (ans1%10==1)
    {
        count++;
    }
   ans1=ans1/10; 
}
while (ans2>0)
{
    if (ans2%10==1)
    {
        count++;
    }
   ans2=ans2/10; 
}

cout<<count<<endl;

return 0;

}

int main()
{
    int a,b;
    cin>>a>>b;
    // cout<<bit(a,b)<<endl;
    bit(a,b);
return 0;
}