//How to create a dynamic array of integers in C++ using the new keyword
#include<iostream>
using namespace std;
int main() {
   int i,n;
   cout<<"Enter total number of elements:"<<"\n";
   cin>>n;
   int *a = new int(n);
   cout<<"Enter "<<n<<" elements"<<endl;
   for(i = 0;i<n;i++) {
      cin>>a[i];
   }
   cout<<"Entered elements are: ";
   for(i = 0;i<n;i++) {
      cout<<a[i]<<" ";
   }
   cout<<endl;
   delete (a);
   return 0;

// //dynamic memory allocation using malloc function 

//  // This pointer will hold the
//     // base address of the block created
//     int* ptr;
//     int n, i;
 
//     // Get the number of elements for the array
//     printf("Enter number of elements:");
//     cin>>n;
//     printf("Entered number of elements: %d\n", n);
 
//     // Dynamically allocate memory using malloc()
//     ptr = (int*)malloc(n * sizeof(int));
 
//     // Check if the memory has been successfully
//     // allocated by malloc or not
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {
 
//         // Memory has been successfully allocated
//         printf("Memory successfully allocated using malloc.\n");
 
//         // Get the elements of the array
//         for (i = 0; i < n; ++i) {
//             ptr[i] = i + 1;
//         }
 
//         // Print the elements of the array
//         printf("The elements of the array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }
//     }
 
//     return 0;


}


   
