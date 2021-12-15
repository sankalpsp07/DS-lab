#include<iostream> 
using namespace std;
 
int linearSearch(int a[], int size, int element){
    for (int i=0;i<size;i++){
        if(a[i]==element){
            return i;
        }
    }
    return -1;
}

int binarySearch(int b[], int size, int element){
    int low, mid, high;
    low=0;
    high=size-1;
    while(low<=high){
        mid=(low+high)/2;
        if(b[mid] == element){
            return mid;
        }
        if(b[mid]<element){
            low=mid+1;
        }
        else{
            high=mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    
    int a[] = {33,44,12,34,87,99,9,55,66,32,80};
    int size1 = sizeof(a)/sizeof(int);

    int b[] = {1,2,3,4,5,6,7,8,9,10};
    int size2 = sizeof(b)/sizeof(int);

    int element = 9;
    
    int searchIndex1 = linearSearch(a,size1,element); 
    int searchIndex2 = binarySearch(b, size2, element);
    
    cout<<element<<" found at "<< searchIndex1<<endl;
    cout<<element<<" found at "<< searchIndex2<<endl;
    return 0;
}
