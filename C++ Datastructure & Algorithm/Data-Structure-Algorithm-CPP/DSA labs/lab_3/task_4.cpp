//deleting a value loacted at index 0 in array
#include <iostream>
using namespace std;
const int n = 5;
int array[n] = {2, 4, 6, 8, 10};
int N=0;
void deletevalue()
{
    int i = 0;
    while (i < 4)
    {
        array[i] = array[i + 1];
        i++;
    }
    for (i = 0; i <= 3; i++)
    {
        cout << "element at index " << i << " is " << array[i] << endl;
    }

}
void delete_random_value(int index){
    for(int i=index;i<n;i++){
        array[i]=array[i+1];
    }

     for (int i = 0; i <= 2; i++)
    {
        cout << "element at index " << i << " is " << array[i] << endl;
    }
   
}

int main()
{

   deletevalue();
   cout<<"******************************"<<endl;
    delete_random_value(2);
}
