// C++ program for implementation of Bubble sort
#include <iostream>
using namespace std;
  
// A function to implement bubble sort
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
      // Last i elements are already in place
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
  
/* Function to print an array */
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
  
// Driver code
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, arrSize);
    cout<<"Sorted array: \n";
    printArray(arr, arrSize);
    return 0;
}
