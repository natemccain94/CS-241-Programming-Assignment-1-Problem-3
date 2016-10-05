//
//  unsortedThree.h
//  COMP 241
//  Fall 2015
//  PA1 Problem 3
//  17 September, 2015
//  Nate McCain
//
/*****
 * Unsorted Type
 */
// Nothing was modified in this file.

#ifndef UNSORTED_TYPE
#define UNSORTED_TYPE

static const int MAX_ITEMS = 3;

class UnsortedList {

 public:
  UnsortedList();
  void MakeEmpty();
  bool IsFull() const;
  int GetLength() const;
  int GetItem( int item );
  bool PutItem(int item);
  void DeleteItem(int item);
  int GetNextItem();

private:
  int length;
  int info[MAX_ITEMS];
  int currentPos;
};

#endif
