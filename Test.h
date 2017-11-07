#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
#include "List.h"

class Test
{
  public:
    void performTests();
  private:
    bool testEmpty();
    bool testSize();
    bool testSearch();
    bool testAddBack();
    bool testAddFront();
    bool testRemoveBack();
    bool testRemoveFront();
};
#endif
