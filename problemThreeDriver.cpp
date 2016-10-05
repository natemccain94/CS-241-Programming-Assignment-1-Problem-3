//
//  problemThreeDriver.cpp
//  COMP 241
//  Fall 2015
//  PA1 Problem 3
//  17 September, 2015
//  Nate McCain
//

#include <iostream>
#include "unsortedThree.cpp"

using namespace std;



int main()
{
    // Initialize the two lists.
    UnsortedList listOne;
    UnsortedList listTwo;
    
    // Initialize the array to hold the two lists.
    int mergeArray[6];
    
    // Putting stuff into the first list.
    listOne.PutItem(1);
    listOne.PutItem(5);
    
    // Putting stuff into the second list.
    listTwo.PutItem(4);
    listTwo.PutItem(50);
    listTwo.PutItem(51);
    
    // Here we find the total size for the mergeArray
    // and initialize it to the size of the two lists together.
    int totalSize = listOne.GetLength() + listTwo.GetLength();
    //int mergeArray[totalSize];
    
    // This variable acts as a counter for when we combine the lists
    // into an unordered list.
    int i = 0;
    
    // The while loop puts all numbers from the first list into
    // the combined list and then puts all the numbers from the
    // second list into the combined list. However, it is not in order.
    while (i < totalSize)
    {
        for (int j = 0; j < listOne.GetLength(); j++)
        {
            mergeArray[i] = listOne.GetNextItem();
            i++;
        }
        for (int k = 0; k < listTwo.GetLength(); k++)
        {
            mergeArray[i] = listTwo.GetNextItem();
            i++;
        }
    }
    
    // Now the combined list will undergo a bubble sort to
    // organize itself into an ordered list.
    for (int a = 1; a <= totalSize; a++)
    {
        for (int b = 0; b < (totalSize - 1); b++)
        {
            if (mergeArray[b] > mergeArray[b+1])
            {
                int holdValue = mergeArray[b];
                mergeArray[b] = mergeArray[b+1];
                mergeArray[b+1] = holdValue;
            }
        }
    }
    
    // This is the loop that prints out mergeArray.
    for (int j = 0; j < totalSize; j++)
    {
        cout << mergeArray[j] << endl;
    }
    
    return 0;
}