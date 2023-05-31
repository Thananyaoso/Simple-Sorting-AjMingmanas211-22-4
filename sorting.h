#include <iomanip>
#include <iostream>
using namespace std;

inline void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    cout<<setw(5)<<a[i];
  }
  cout<<endl;
}

// selection sort function module in C 
void selectionSort(int data[], int length){ 
	int i, j, m, mi; 
	for (i = 0; i < length - 1; i++)
	{ 
     m=i;
      for (j = i+1;j<length;j++){
        if (data[j] < data[m]){
          m=j;
        }
      }
        mi=data[i];
        data[i]=data[m];
        data[m]=mi; 
      display(data,length);
  } 
  cout<<"Selection sort :";
  display(data,length);
} 

void insertionSort(int a[],int n){
  int i,j,value;
  
  for(i=1; i<n; i++)
  {
    value = a[i];
    for( j = i - 1; j >= 0 && a[j] > value; j--)
    {
      a[j+1] = a[j];
      display(a,i);
    }
    a[j+1] = value;
    display(a,i);
  }
  cout<<"Insertion :";
  display(a,n);
}

inline void swap(int &a,int &b){
 int temp;
  temp=a;
  a=b;
  b=temp;
  
}

void bubbleSort(int *a,int n){

int i,j;
    cout<<endl;
// how may pair to compare?
// for(i=n-1; i>0 ; i--){ //1
  for(i=0; i<n-1 ; i++){ //1
    int sorted = 0;
    for(j=0 ; j<n-1 ; j++){ //2
        if(a[j] > a[j+1]){
          swap(a[j],a[j+1]);
          sorted++;
        } 
    }  
    display(a,n);// ( display process)
    cout<<"==="<<endl; //end of 2 loop
  if(sorted == 0){ //if input already sorted then break
      break;
  } 
} 
  cout<<"Bubble sorted:";
  display(a,n);//end of 1 loop (display output)
}

//merge declaration
void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
  int i = 0, j = 0, k = 0;

  while (i < leftSize && j < rightSize) {
    if (left[i] <= right[j]) {
      arr[k] = left[i];
      i++;
    } else {
      arr[k] = right[j];
      j++;
    }
    k++;
  }

  while (i < leftSize) {
    arr[k] = left[i];
    i++;
    k++;
  }

  while (j < rightSize) {
    arr[k] = right[j];
    j++;
    k++;
  }
}
//merge sort
void mergeSort(int arr[], int n) {
  if (n <= 1) {
    return;
  }

  int mid = n / 2;
  int left[mid];
  int right[n - mid];

  for (int i = 0; i < mid; i++) {
    left[i] = arr[i];
  }
  
  
  for (int i = mid; i < n; i++) {
    right[i - mid] = arr[i];
  }
  

  mergeSort(left, mid);
  mergeSort(right, n - mid);
  merge(arr, left, mid, right, n - mid);
  
  display(arr,n);
  
} 

