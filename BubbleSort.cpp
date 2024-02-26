#include<iostream>

void swap(int &num1, int &num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        std::cout << "\t" << arr[i];
    }
}

int main()
{
    int arr[] = {4, 74, 22, 56, 2, 8, 767, 233, 98};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "\nBefore sorting:";
    for (int i = 0; i < size; i++)
    {
        std::cout << "\t" << arr[i];
    }

    std::cout << "\nAfter sorting:";
    bubbleSort(arr, size);

    return 0;
}
