#include<iostream>
using namespace std;
int factorial(int n){
    int fact =1;
    for (int i = 1; i <=n; i++)
    {
       fact=fact*i; 
    }
    return fact;
}
    int nCr(int n,int r){
        int num =factorial(n);
        int demo=factorial(r)*factorial(n-r);
        int ans =num/demo;
      }

    
    // int ans =(n!/(n-r)!*r!);

int main()
{
int n ,r;
cin>>n>>r;
cout<<"answer is "<<nCr(n,r)<<endl;

return 0;
}