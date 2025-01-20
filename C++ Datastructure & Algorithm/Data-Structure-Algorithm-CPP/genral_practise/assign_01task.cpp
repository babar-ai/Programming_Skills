#include <iostream>
using namespace std;

int calculate_wages(int hours, int price)
{
    int weekly_wages;
    if (hours <= 84)
    {
        int weekly_wages = hours * price;
        cout << "your weekly wages is about RS." << weekly_wages << endl;
        return 0;
    }
    else
    {
        cout << "you working houres are more than one week hours"<<endl;
        cout << "your wages  is about RS." << weekly_wages << endl;
    }
}
int main()
{
    int hours, price;
    cout << "Please enter your weekly working hours" << endl;
    cin >> hours;
    cout << "Enter price per hour" << endl;
    cin >> price;
    calculate_wages(hours, price);
}