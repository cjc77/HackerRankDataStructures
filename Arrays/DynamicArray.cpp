/*
- Create a list (seqList) to hold N (size) sequences
- Create integer (lastAns) and initialize to 0
- 2 Queries can be performed on seqList
    Q1)
    -- find seqList[(x^lastAns) % N]
    -- append y to this sequence

    Q2)
    -- find seqList[(x^lastAns) % N]
    -- lastAns = seqList[y % size(sequence)]
    -- print value of lastAns
*/

#include <iostream>
using namespace std;



void makeSeqList(int & size, int ** & arr);
void performQueries(int size, int ** & seqList);



int main()
{
    int ** seqList;
    int size = 0;
    makeSeqList(size, seqList);
    performQueries(size, seqList);
    return 0;
}



void performQueries(int size, int ** & seqList)
{
    int queries = 0;
    int q = 0;
    int x = 0;
    int y = 0;

    int idx = 0;
    int lastAns = 0;
    // Keep track of each sequence size
    int seqSizes[size];

    int * temp;
    for(int i = 0; i < size; ++i) {
        seqSizes[i] = 0;
    }

    cin >> queries;
    while(queries) {
        cin >> q >> x >> y;
        // Find target idx
        idx = (x^lastAns) % size;
        // If query-type 1
        if(q == 1) {
            // Prepare to expand seqList[idx] by 1
            temp = new int [seqSizes[idx]+1];
            // Append y
            temp[seqSizes[idx]] = y;
            // Copy all other values from seqList[idx] into temp
            for(int i = 0; i < seqSizes[idx]; ++i) {
                temp[i] = seqList[idx][i];
            }
            // Delete old array and resize
            delete [] seqList[idx];
            seqList[idx] = temp;
            // Update recorded size of this sequence
            seqSizes[idx] += 1;
        }
        // If query-type 2
        else if(q == 2) {
            // set lastAns to size of seq[y % size_of_current_sequence]
            lastAns = seqList[idx][y % seqSizes[idx]];
            cout << lastAns << endl;
        }
        --queries;
    }
}



void makeSeqList(int & size, int ** & arr)
{
    cin >> size;
    arr = new int * [size];
}
