#include <iostream>
using namespace std;


int makeArray(int * & arr);
void printArray(int * arr, int size);

int main()
{
    int * arr;
    int size = 0;
    size = makeArray(arr);
    printArray(arr, size);
    return 0;
}


// Make the array, intake values, return size
int makeArray(int * & arr)
{
    int size = 0;
    cin >> size;
    cin.ignore(100, '\n');
    arr = new int[size];
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    return size;
}


// Print that badbody in reverse
void printArray(int * arr, int size)
{
    for(int i = size-1; i >= 0; --i) {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
