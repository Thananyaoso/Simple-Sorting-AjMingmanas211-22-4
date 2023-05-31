#include <iostream>
#include <iomanip>
using namespace std;
#include "sorting.h"

int main(int argc, char** argv) {
  int N = argc-1;
  int* a = new int[N];
  for (int i=1; i < argc;i++)
    a[i - 1 ] = atoi(argv[i]);


  display(a,N);
  // bubbleSort(a,N); 
  // cout<<endl;
  // selectionSort(a,N);
  // cout<<endl;
  // insertionSort(a,N);
  mergeSort(a,N);

  delete[] a;
  return 0;
}


