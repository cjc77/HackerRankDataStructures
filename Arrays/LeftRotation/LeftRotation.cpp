#include <iostream>
using namespace std;



void printArray(int size, int arr[]);
void makeArray(int size, int * & arr);
void rotateArray(int rotations, int size, int arr[]);



int main()
{
    int size = 0;
    int rotations = 0;
    int * arr;
    cin >> size >> rotations;
    makeArray(size, arr);
    rotateArray(rotations, size, arr);
//    printArray(size, arr);
    return 0;
}



void rotateArray(int rotations, int size, int arr[])
{
    int newIdx = 0;
    // Array for storing the answer
    int rotatedArray[size];
    // True distance moved, i.e. *** (6 % 5) = (1 % 5) = 1 ***
    int trueDistance = rotations % size;
    for(int idx = 0; idx < size; ++idx) {
        // Map original index to post-rotational index
        if(idx < rotations) {
            newIdx = size + (idx - (trueDistance));
        }
        else {
            newIdx = (idx - (trueDistance)) % size;
        }
        // Store result.
        rotatedArray[newIdx] = arr[idx];
    }
    printArray(size, rotatedArray);
}



void makeArray(int size, int * & arr)
{
    arr = new int [size];
    for(int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}



void printArray(int size, int arr[])
{
    for(int i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}
