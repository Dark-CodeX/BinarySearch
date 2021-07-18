#include <iostream>


/*

Time complexity: O(log(n)), where n is the length of the array.

Best Case: O(1), where 1 is the first index of the array.
Wrost Case: O(log(n)), where n is the length of the array.
Average / Expected Case: O(log(n)), where n is the length of the array.

Works only when array is sorted and array contains only numbers (INT|FLOAT|DOUBLE|UNSIGNED|SIGNED|LONG).

*/
template <class T>
long long int BinarySearch(T array[], unsigned int size, T key)
{
    unsigned int low = 0, high = size, mid;
    if (array[low] == key)
        return key;
    if (array[high - 1] == key)
        return high - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (array[mid] == key)
            return mid;
        if (array[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(void)
{
    int key;
    int array[] = {1, 2, 3, 5, 6, 7, 8, 9, 10, 231, 1414, 3413, 5000, 12235, 15000, 17000, 19000, 20000};
    std::cout << ("enter key: ");
    scanf("%d", &key);
    printf("%d is at %d", key, BinarySearch<int>(array, sizeof(array) / sizeof(array[0]), key));
    return 0;
}