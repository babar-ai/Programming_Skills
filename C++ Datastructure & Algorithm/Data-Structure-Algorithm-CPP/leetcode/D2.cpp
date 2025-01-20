#include <iostream>

using namespace std;

int arr(int arra[], int n, int r, int c)
{

    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j]=arra[j];
        }
    }
    //to print 2d array
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{

    int array[] = {1, 2, 3, 4, 5, 3};
    int row = 2;
    int coloum = 3;
    arr(array, 6, row, coloum);
    

    return 0;
}