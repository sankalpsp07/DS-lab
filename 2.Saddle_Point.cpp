#include<iostream>
using namespace std;

void saddle(int a[][10],int n){
     int smallest, index, largest,cnt;

     for(int i=0;i<n;i++){
        index=0;
        smallest=a[i][0];
        for (int j=0;j<n;j++){
            if (smallest>= a[i][j]) {
                smallest = a[i][j];
                index=j;
            }
        }
        largest = 0;
        for (int j=0;j<n;j++) {
            if (largest<a[j][index]) {
                largest=a[j][index];
            }
        }
        if (smallest==largest) {
            cout << "Saddle point is " << largest;
            cnt++; 
        }
    }

    if (cnt==0) {
        cout <<"Saddle Point not found ";
    }

}
int main(){

    int a[10][10],n;
    
    cout<<"Enter size of Matrix:";
    cin>>n;

    cout << "Enter array elements:"<<endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    
    saddle(a,n); 

   
    return 0;
}
