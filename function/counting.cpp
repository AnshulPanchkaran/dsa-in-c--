#include<iostream>
using namespace std;
int printCounting(){
    int n;
    cout<<"enter the number you want to print the counting"<<endl;
   cin>>n;

    for (int i = 0; i <=n; i++)
    {
     cout<<i<<" ";
    }
    cout<<endl;
}


int main()
{
    // int n;
    // cout<<"enter the number you want to print the counting"<<endl;
    // cin>>n;
    printCounting();
return 0;
}