#include<iostream>
using namespace std;
int main()
{
    int rupee;
    cout<<"enter the ruppee you want to convert"<<endl;
    cin>>rupee;
    char convertor;
    switch (convertor)
    {
    case 1:
     cout<<"number of 100 notes are required"<<endl;
            cout<<(rupee%100)<<endl; 
         break;

     case 2: cout<<"number of 50 notes are required"<<endl;
             cout<<(rupee/50)<<endl; 
         break;
     case 3: cout<<"number of 20 notes are required"<<endl;
            cout<<(rupee/20)<<endl; 
         break;
     case 4: cout<<"number of 1 notes are required"<<endl;
            cout<<(rupee/1)<<endl; 
         break;
    
    default:
            cout<<"invalid";
        break;
    }
return 0;
}