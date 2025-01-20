#include<iostream>
using namespace std;

const int HeapCapacity = 40;
int HeapSize = 0;

int heap[HeapCapacity];

void percolate_up(int x, int i){
	while(i>1 && heap[i/2]>x){
		heap[i] = heap[i/2];
		cout<<"\n"<<heap[i/2]<<" pushed down to index "<<i;
		
		i = i/2;
		cout<<" and hole percolated up to index "<<i;
	}
	heap[i]=x;
	cout<<"\nx = "<<x<<" placed at index "<<i;
}

void percolate_down(int x, int i){
	while(2*i<=HeapSize){
		if(x<heap[2*i] && ((x<heap[2*i+1])||((2*i+1)>HeapSize))){
			break;
		}
		
		if((2*i+1 <=HeapSize) && heap[2*i+1] < heap[2*i]){
			heap[i]=heap[2*i+1];
			i = i*2+1;
			cout<<"\n"<<heap[2*i+1]<<" pushed up to index "<<i;
		}else{
			heap[i]=heap[2*i];
			i = 2*i;
			cout<<"\n"<<heap[2*i]<<" pushed up to index "<<i;
		}
		cout<<" and hole percolated down to index "<<i;
	}
	heap[i]=x;
	cout<<"\nx = "<<x<<" placed at index "<<i;	
}
void insert(int value){
	HeapSize++;
	percolate_up(value,HeapSize);
}
//Task1. for students of both sections
int deleteMin(){
if (HeapSize == 0) {
        cout << "\nHeap is empty!";
        return -1; // or some sentinel value
    }
    
    int minVal = heap[1];          // Root element is the minimum
    heap[1] = heap[HeapSize];       // Replace root with last element
    HeapSize--;                     // Decrease the size of the heap
    percolate_down(heap[1], 1);    // Restore the heap property
    
    return minVal;

}

// Task2. for students of both sections
void buildHeap(){
 for (int i = HeapSize / 2; i >= 1; i--) {
        percolate_down(heap[i], i);
    }

}

void printHeap(){
	cout<<"\nThe heap constains: ";
	for(int i=1;i<=HeapSize;i++){
		cout<<heap[i]<<"\t";
	}
}

int main(){
	insert(13);
	insert(21);
	insert(16);
	insert(24);
	insert(31);
	insert(19);
	insert(68);
	insert(65);
	insert(26);
	insert(32);
	
	printHeap();
	
	int val = 14;
	cout<<"\nInserting "<<val;
	insert(14);
	printHeap();
	
	cout<<"\n\n\nDeleting Min Value = "<<heap[1];
	deleteMin();
	printHeap();
	
	cout<<"\n\n\nDeleting Min Value = "<<heap[1];
	deleteMin();
	printHeap();
	
	cout<<"\n\n\nDeleting Min Value = "<<heap[1];
	deleteMin();
	printHeap();
	
	cout<<"\n\n\nPutting some random data in the array to test buildHeap";
	int i;
	for(i=1;i<15;i++){
		heap[i]=rand()%1000;
	}
	HeapSize = i;
	printHeap();
	
	buildHeap();
	cout<<"\n\n\nAfter calling BuildHeap";
	printHeap();
	
	return 0;
}


