#include <iostream>
#include "BubbleSort.hpp"

void PrintArray(const int arr[] , int iSize)
{
    int i = 0;
    std::cout << "[";
    for(;i<iSize;++i)
    {
        std::cout << " " << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

void PrintArrayVector(const std::vector<int> arr)
{
    std::cout << "[";
    for(int i : arr)
    {
        std::cout << " " << i << " ";
    }
    std::cout << "]" << std::endl;
}

int main(void)
{

    std::vector<int> arrVector{64,58,14,87,92,15,45,8,7,5,1,58};
    int arr[] = {64,58,14,87,92,15,45,8,7,5,1,58};
    CBubbleSort oCBubbleSort;
    int iSize = sizeof(arr)/sizeof(int);


    std::cout << "Unsorted vector: ";
    PrintArrayVector(arrVector);

    oCBubbleSort.Sort(arrVector);

    std::cout << "sorted vector: ";
    PrintArrayVector(arrVector);


    // std::cout << "Unsorted array: ";
    // PrintArray(arr,iSize);

    // oCBubbleSort.Sort(arr,iSize);

    // std::cout << "sorted array: ";
    // PrintArray(arr,iSize);

    return 0;
}