#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;
    while (i <= j)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    swap(arr[i], arr[j]);
    return j;
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int j = partition(arr, l, h);
        quickSort(arr, l, j - 1);
        quickSort(arr, j + 1, h);
    }
}

int main()
{
    int arr[11] = {9, 4, 3, 11, 15, 20, 2, 24, 30, 1, 35};
    quickSort(arr, 0, 10);

    cout << "Sorted array: ";
    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}