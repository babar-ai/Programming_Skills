
#include <iostream>
using namespace std;

void BubbleSort(int array[], int size) {
  bool swapped=1;
  while (swapped) {
    swapped = 0;
    for (int i = 0; i < size - 1; i++) {
      if (array[i] > array[i + 1]) {
        swap(array[i],array[i + 1]);
        swapped=true;
      }
    }
  }
}
int main(){
  int array[]={21, 11, 14, 12, 18};
  int size = sizeof(array) / sizeof(array[0]);

  cout<<"unsorted array"<<endl;
  for(int i=0;i<size;i++){
    cout<<array[i]<<"\t";
  }
  cout<<endl;
  BubbleSort(array, size);

  cout<<"Sorted array: "<<endl;
  for (int i = 0; i < size; i++){
    cout << array[i]<<"\t";
  }
  cout << endl;
return 0;
}