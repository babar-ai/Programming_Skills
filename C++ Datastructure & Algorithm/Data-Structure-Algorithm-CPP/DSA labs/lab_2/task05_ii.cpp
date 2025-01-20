// printing the sum of the array element throuht funtion by using referecen operater
#include<iostream>
using namespace std;

void sum(int &marks){
	int sum=0;
for(int i=0;i<5;i++){
	sum+=*(&marks+i);
    
}
cout<<"the sum of the marks is "<<sum<<endl;
}


int main(){

int marks[5]={1,2,3,4,5};

sum(marks[0]);


}