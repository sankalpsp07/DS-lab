#include<iostream>
using namespace std;

void add(int a[3][3], int b[3][3]){
    int c[3][3]; 
    cout<< "Resulting array"<<endl; 
     for (int i=0;i<3;i++){
      
        for (int j =0;j<3; j++) {
            
         c[i][j] = a[i][j] + b[i][j];
         cout<<c[i][j]<<" ";
    }
    cout<<"\n";
  }
}

void sub(int a[3][3], int b[3][3]){
    int c[3][3]; 
    cout<< "Resulting array"<<endl; 
     for (int i=0;i<3;i++){
       for (int j =0;j<3; j++) {
            
         c[i][j] = a[i][j] - b[i][j];
         cout<<c[i][j]<<" ";
    }
    cout<<"\n";
  }
}

void multiply(int a[3][3], int b[3][3]){
    int c[3][3]; 
    cout<< "Resulting array"<<endl; 
     for (int i=0;i<3;i++){
       for (int j =0;j<3; j++) {
         for(int k=0;k<3;k++){ 
           
         c[i][j]=a[i][k] + b[k][j];
         cout<<c[i][j]<<" ";
    }
    cout<<"\n";
  }
}

int main()
{  
    int a[3][3], b[3][3];
    cout<< "Enter elements of first array"<<endl; 
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    
    cout<< "Enter elements of second array"<<endl; 
     for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cin>>b[i][j];
        }
    }
    add(a,b); 
    return 0;
}
