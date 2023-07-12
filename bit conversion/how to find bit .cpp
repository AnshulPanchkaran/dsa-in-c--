#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int n;
   cin>>n;
   int ans=0;
   int i=0;
   while(n!=0){
    int bit =n&1;
    ans = (bit * pow(10,i) ) + ans;
    n=n >> 1;
    i++;
   }
   cout<<"answer is "<< ans<<endl;
return 0;
}

// convert negative number into bit number 
#include<iostream>
#include<math.h>
using namespace std;
int main (void)
{
     long long int n;
    cin>>n;
    unsigned  long long int i =0,ans=0;
    if (n<0)

    {
        n=pow(2,16)+n;

    }
    cout<<n<<endl;
    
    while (n)
    {
    
    int lastbit =n&1;
    ans = (pow(10,i)*lastbit)+ans;
    
    n=n>>1;
    i++;
    cout<<"answer is"<<ans<<endl;

    }
cout<<"answer is"<<ans<<endl;

return 0;
}


