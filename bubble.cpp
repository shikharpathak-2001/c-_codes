#include <iostream>
using namespace std;
  
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
} 
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int N;
    cout<<"shikhar Pathak\nA2305220243"<<endl;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>N;
    int arr[N];
    cout<<"enter the elements of the array"<<endl;
    for(int i = 0; i< N ; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}