#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head;

void CreateList(int NewElement){
    head=new node();
    head->data=NewElement;
    head->next=NULL;
}
void AddElementAtEnd(int Next_element){
    node *ptr=new node();
    ptr->data=Next_element;
    ptr->next=NULL;
    head->next=ptr;
}
void Showdata(){
    cout<<head->next->data<<endl;
    cout<<head->
    //cout<<head->next->next->data<<endl;
    
}

int main(){

CreateList(23);
AddElementAtEnd(24);
Showdata();





}



//MOST INITIAL PROGRAM TASK 1

// #include<iostream>
// using namespace std;

// struct node
// {
//     int data;
//     node *next;
// }*head;
//  void  CreateList(int NewElement){
//     head=new node();
//     head->data=NewElement;
//     head->next =NULL;
// }

// struct node1
// {
//     int data;
//     node *next;
// }*head1;
// void  CreateList1(int NewElement){
//     head1=new node1();
//     head1->data=NewElement;
//     head1->next =NULL;
// };



// void AddElementatEnd(int element){
//      head1=new node1();
//     head1->data=element;
//     head->next =NULL;
// }

// void Readdata(){
//     cout<<head->data;
// }
// void Readdata1(){
//     cout<<head1->data;
// }
// int main(){
//     CreateList(140);
//     Readdata();
//     cout<<endl;
//  CreateList1(114);
// Readdata1();



// }
