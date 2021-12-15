
#include <bits/stdc++.h>
using namespace std;

bool isUTMatrix(int a[][3], int n){
    for (int i=1;i<n;i++)
        for (int j=0; j<i;j++)
            if (a[i][j]!=0){
                return false; 
    } 
    return true;
}

void transpose(int a[][3], int b[][3], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           b[i][j]=a[j][i];
        }
}
        for (int i=0;i<n; i++){
          for (int j=0;j<n; j++)
          cout<<b[i][j]<<" ";
          cout<<endl;
    }
}

void diagonal(int a[][3], int n){
	int sum1= 0, sum2= 0;
  
	for (int i=0;i<n;i++) {
	 for (int j=0;j<n;j++) {
	  if (i==j){
	     sum1+=a[i][j];
      }
			if ((i+j)==(n-1)){
				sum2 += a[i][j];

        }
		}
}
	
	cout << "Sum1-" << sum1 << " "<< "Sum2 - "<<sum2 <<endl ; 

}


int main()
{
	int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j]; 
        }
    }
    int n=3; 
    int b[3][3];
    
    int choice; 
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1:     if(isUTMatrix(a,n)){
                     cout<<"This is a upper triangular matrix";
                     } 
                     else{
                     cout<<"No, this is not a upper triangular matrix"; 
                     }
                     break;
        case 2: diagonal(a,4);
            break;
        case 3:  transpose(a,b,n); 
            break;

        default:
            cout << "Wrong choice"<<endl;
            break; 
    }

   

	return 0;
}
