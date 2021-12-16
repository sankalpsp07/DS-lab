#include<iostream>
using namespace std; 
 
void printArray(int* A, int n){
    for (int i = 0; i < n; i++){
        cout<<A[i]<<" "; 
    }
    cout<<endl;
}

 
void bubbleSort(int *A, int n){
    int temp;
    int isSorted = 0;
    for (int i = 0; i < n-1; i++){
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
        }
    } 
}

void insertionSort(int *A, int n){
    int key, j;
    for (int i = 1; i <= n-1; i++)
    {
        key = A[i];
        j = i-1;
        while(j>=0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

void selectionSort(int *A, int n){
    int indexOfMin, temp;
    for (int i = 0; i < n-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < n; j++)
        {
            if(A[j] < A[indexOfMin]){
                indexOfMin = j;
            }
        }
     
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}


int main(){
    int A[] = {22,33,11,66,55,99,55,77,44}; 
    int n = sizeof(A)/sizeof(A[1]);
    cout<<" 1. Bubble Sort \n 2. Selection Sort \n 3. Insertion Sort"<<endl; 

    int choice; 
    cout<<"Enter your choice : ";
    cin>>choice;

    switch(choice){
        case 1: cout<<"Using Bubble Sort:" ;
               bubbleSort(A, n); 
               printArray(A, n);
               break; 
               
        case 2: cout<<"Using Selection Sort:";
                selectionSort(A, n); 
                printArray(A, n);
                 break;
        case 3: cout<<"Using Insertion Sort:";
                insertionSort(A, n); 
                printArray(A, n);
            break;

        default:
            cout << "Wrong choice"<<endl;
            break; 
    }

    return 0;
}
