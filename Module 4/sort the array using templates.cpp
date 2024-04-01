#include <iostream>

template <typename T>
void swapValues(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void bubbleSort(T arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                swapValues(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{

    int intArray[] = {5, 2, 8, 1, 9};
    int intSize = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Original integer array: ";
    displayArray(intArray, intSize);
    bubbleSort(intArray, intSize);
    std::cout << "Sorted integer array: ";
    displayArray(intArray, intSize);

    double doubleArray[] = {3.14, 1.1, 2.2, 0.5, 4.0};
    int doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    std::cout << "\nOriginal double array: ";
    displayArray(doubleArray, doubleSize);
    bubbleSort(doubleArray, doubleSize);
    std::cout << "Sorted double array: ";
    displayArray(doubleArray, doubleSize);

    return 0;
}
