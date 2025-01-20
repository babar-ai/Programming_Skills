#include <iostream>
using namespace std;

//funtion 
/* void fun(void *ptr6, char type)
{

    switch (type)
    {
    case 'i':
        // cout<<*(int*(ptr6)); note the mistake
        cout << *((int *)ptr6) << endl;
        break;
    case 'f':
        cout << *((float *)ptr6);
    }
} */

//finding max value inside of array element using user define funtion
int getmin(int array[],int num){

int min=array[0];
for(int i=0;i<num;i++){
    if(array[i]<min){
        min=array[i];
    }
    
}
cout<<min<<endl;


}
int main()
{
    // multiline comment shortcut "shift+alt+A"
    /* //to declare an pointer
    int* ptr;
    int a=10;
    //we can find the address of a by "&"
    cout<<&a<<endl;
    //now to store the address in a pointer
    ptr=&a;
    //to print the address of a through pointer ptr

    cout<<ptr<<endl; //here we can see that both the address will be same

    // Now if we want to access the value of a through pointer ptr then we will used de_refrencing operator like *ptr here note that dereferencing operator point out to the value of the address
    cout<<*ptr<<endl;

    //here note that we can assign value to dereferecing pointer which will replace the actual value stored in that varibale
    *ptr=20;
    cout<<*ptr<<endl; //here the actual  value has been replaced by 20 so this is one of the drawback of pointers  in my opinion.
    cout<<a<<endl; //as a result the value also has been changed in varibal a.
     */
    // keep in mind that always store int data type varible address in int datatype pointer similar case for char and for float other wise it will show an error.

    // NOW...
    // int* ptr2;
    // let i want to store a value in ptr2 like
    //*ptr2=5;    //this line  of code show me error message because we can only store tha address of anther variable while we can assign a value to any pointer when we assign the address of any varibale.
    // cout<<*ptr2<<endl;
    // but we can do this
    /* int v;
    int* ptr3;
    ptr3=&v;
    *ptr3=10;
    cout<<v<<endl;   //SO here we can store a value in any varibal through pointers.
     */

    // topic #2 (VOID POINTER)

    /* void *voidptr;
    int a = 3;
    float b = 5.6;
    voidptr = &a;
    voidptr = &b;

    fun(&a, 'i');
    fun(&b,'f');
 */
    // but at the same time i can store the address of float data type in void pointer
    // ptr4=&b;

    // but but attention here
    // we can not directly dereference void pointers like
    // cout<<*ptr4<<endl;  this line of code will show an error

    // here we must have to type cast the void data type to int or flot depends on which data type varible value you have assign to void pointer
    // int ptr4= *static_cast<int*>(ptr4);
    // type casting
    // cout << *((int *)voidptr);
    // cout << *((float *)voidptr);

    // 2nd methord through fucntion
    //  fun(&a, 'i');
    // fun(&b,'f');
//
 /* int array[10]={2,4,5,6,8};
cout<<array<<endl;   //the name of the array will print the address of the first element.
cout<<&array[0]<<endl; //this line of code and above should show the same result.
cout<<array[2]<<endl; 
cout<<*(array+2)<<endl;  */ //this both line of code behave same

//
/* //NOTE: there is a problem while printing the address of character data type..
char ch='T';
char *cha; //here i notecd that the the name of pointer varibale and normal varibale can't be same.
cha=&ch;
cout<<(void)cha<<endl;   
 */

//STOREING ELEMENTS IN ARRAY THROUGH FOR LOOP

/* int myarray[5];

for(int i=0;i<5;i++)
{
cout<<"ENTER NUMBER :"<<endl;
cin>>myarray[i];
}

//printing elements of an array through for loop using pointers
for(int i=0;i<5;i++)
{
cout<<myarray<<" "; //this array name will print the address of the first element of array always.
cout<<*(myarray+i)<<" ";

} */

//TASK 
//Find tha minimum value amoung the array element
//Methord 01
/* 
int marks[5]={50,40,70,30,45};
int min=50;
for(int i=0;i<5;i++){
 
if(min>marks[i])
min=marks[i];

}
cout<<"the minimum value amoung the elements of an array is "<<min<<endl; */

//Methord #02 through user define funtion
int marks[5]={50,40,70,30,45};
getmin(marks,5);


}