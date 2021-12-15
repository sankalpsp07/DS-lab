#include<iostream>
using namespace std;

void passwd(char s[]){
    int passwd=0;
     	for(int i=0;i<6;i++) {
		  for(int j=0;j<6;j++) {
			for(int k=0;k<6;k++) {
			    for(int l=0;l<6;l++) {
					cout<<s[i]<<s[j]<<s[k]<<s[l]<<endl;
					passwd++;
				}
			}
		}
	}
	cout<<"Total passwords are: " <<passwd; 
}


int main()
{  
   char s[6]={'1','3','a','s','t','i'} ;
   passwd(s);

    return 0;
}
