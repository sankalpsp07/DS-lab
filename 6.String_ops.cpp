#include<bits/stdc++.h>
using namespace std;

void freq(string s){
    char c;
    cout<<"Enter character: ";
    cin>>c; 
    int cnt = 0;
  for (int i=0;i<s.size();i++){
        if (s[i]==c){
            cnt++;
        }
    }
   cout<<cnt<<endl;
}

void del(string s){
    int x,y;
    cout<<"Enter positions - "<<" ";
    cin>>x>>y;
    for(int i=0;i<s.length();i++){
        for(int j=x;j<=y;j++){
            s[j]='\0';
        }
    }
    cout<<"New String - " <<s<<endl; 
}

void chardel(string s){
    char c,i,j;
    cout<<"enter character c -"<<" ";
    cin>>c; 
   while(s[i]!='\0'){
       if(s[i]==c){
           j=i;
           while(s[j]!='\0'){
               s[j]=s[j+1];
               j++;
           }
       }
       i++;
   }

   cout<<"New string- "<<s<<endl; 
}

void palindrome(string s){
 int low=0;
 int high=s.length()-1;
 while(low<high){
    if (s[low++]!=s[high--]){
            cout<<"Not a palindrome";
            return;
        }
    }
   cout<<"It is a palindrome"; 
}

 

int main()
{
    string s;
    cout<<"Enter string - "; 
    cin>>s;

    int choice; 
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1: freq(s);
           break;
        case 2: del(s);
            break;
        case 3:  chardel(s); 
            break;

         case 4: palindrome(s); 
            break;
        default:
            cout << "Wrong choice"<<endl;
            break; 
    }
    

    return 0;
}
