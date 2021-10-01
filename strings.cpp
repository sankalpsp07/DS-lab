
#include <iostream>
#include<string>

using namespace std;

int main()
{
    string s1="hello";
    string s2="world";
    string s3;
    int len;
    
    s3=s1;
    cout<<"s3 : ";
    cout<<s3<<endl; 
    
    s3= s1+s2;
    cout<<"s3 : ";
    cout<<s3<<endl;
    
    len=s3.size();
    cout<<"Length : ";
    cout<<len;
    

    return 0;
}
