#include <iostream>
#include "LinkedListOfInts.h"
#include "Test.h"
 void Test::performTests()
 {
   std::cout<<"Test 1: isEmpty\n";
   if(testEmpty())
   {
     std::cout<<"Test 1: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 1: FAILED\n\n";
   }
   std::cout<<"Test 2: size\n";
   if(testSize())
   {
     std::cout<<"Test 2: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 2: FAILED\n\n";
   }
   std::cout<<"Test 3: search\n";
   if(testSearch())
   {
     std::cout<<"Test 3: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 3: FAILED\n\n";
   }
   std::cout<<"Test 4: addBack\n";
   if(testAddBack())
   {
     std::cout<<"Test 4: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 4: FAILED\n\n";
   }
   std::cout<<"Test 5: addFront\n";
   if(testAddFront())
   {
     std::cout<<"Test 5: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 5: FAILED\n\n";
   }
   std::cout<<"Test 6: removeBack\n";
   if(testRemoveBack())
   {
     std::cout<<"Test 6: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 6: FAILED\n\n";
   }
   std::cout<<"Test 7: removeFront\n";
   if(testRemoveFront())
   {
     std::cout<<"Test 7: PASSED\n\n";
   }
   else
   {
     std::cout<<"Test 7: FAILED\n\n";
   }
 }
 bool Test::testEmpty()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) giving empty list: ";
   if(testableList.isEmpty())
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   b) giving populated list(Relies on addBack): ";
   bool temp = true;
   for(int i = 0; i < 25; i++)
   {
     testableList.addBack(i);
     if(testableList.isEmpty())
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testSize()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) giving empty list: ";
   if(testableList.size() == 0)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   b) giving populated list(relies on addBack): ";
   bool temp = true;
   for(int i = 1; i <= 25; i++)
   {
     testableList.addBack(i);
     if(testableList.size() != i)
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testSearch()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) searching an empty list: ";
   if(testableList.search(1))
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   else
   {
     std::cout<<"PASSED\n";
   }
   std::cout<<"   b) searching a list that contains the number: ";
   testableList.addBack(0);
   bool temp = true;
   for(int i = 1; i <= 25; i++)
   {
     testableList.addBack(i);
     if(!testableList.search(i-1))
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   c) searching a list that does not contain the number: ";
   temp = true;
   for(int i = 30; i <= 50; i++)
   {
     if(testableList.search(i))
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testAddBack()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) addBack to empty list: ";
   testableList.addBack(0);
   if(testableList.size()==1)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   b) addBack goes to back: ";
   bool temp = true;
   for(int i = 1; i <= 25; i++)
   {
     testableList.addBack(i);
     std::vector<int> vec;
     vec = testableList.toVector();
     if(vec[i] != i)
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testAddFront()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) addFront to empty list: ";
   testableList.addFront(0);
   if(testableList.size()==1)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   b) addFront adds to front: ";
   bool temp = true;
   for(int i = 1; i <= 25; i++)
   {
     testableList.addFront(i);
     std::vector<int> vec;
     vec = testableList.toVector();
     if(vec[0] != i)
     {
       temp = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testRemoveBack()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) removeBack from empty list: ";
   if(testableList.removeBack())
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   else
   {
     std::cout<<"PASSED\n";
   }
   std::cout<<"   b) removeBack updates size: ";
   bool temp = true;
   bool temp2 = true;
   for(int i = 25; i >= 1; i--)
   {
     testableList.addFront(i);
   }
   for(int i = 1; i <= 25; i++)
   {
     testableList.removeBack();
     if(testableList.size()!= 25-i)
     {
       temp = false;
     }
     if(testableList.search(25-i))
     {
       temp2=false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   c) removeBack actually removes from back: ";
   if(temp2)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
 bool Test::testRemoveFront()
 {
   bool pass = true;
   LinkedListOfInts testableList;
   std::cout<<"   a) removeFront from empty list: ";
   if(testableList.removeFront())
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   else
   {
     std::cout<<"PASSED\n";
   }
   std::cout<<"   b) removeFront updates size: ";
   bool temp = true;
   bool temp2 = true;
   for(int i = 1; i <= 25; i++)
   {
     testableList.addFront(i);
   }
   for(int i = 25; i >= 1; i--)
   {
     testableList.removeFront();
     if(testableList.size()!= (i))
     {
       temp = false;
     }
     std::vector<int> vec;
     vec = testableList.toVector();
     if(vec[0]==i)
     {
       temp2 = false;
     }
   }
   if(temp)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   std::cout<<"   c) removeFront actually removes from front: ";
   if(temp2)
   {
     std::cout<<"PASSED\n";
   }
   else
   {
     std::cout<<"FAILED\n";
     pass = false;
   }
   return pass;
 }
