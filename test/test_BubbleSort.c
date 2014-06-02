#include "unity.h"
#include "BubbleSort.h"



void setUp(void)
{
}

void tearDown(void)
{
}



void test_swap_5_3_should_swap(void){
   
 int array[]= {5,3};
swap( array, 0,1) ;
 TEST_ASSERT_EQUAL( 3, array[0]);
 TEST_ASSERT_EQUAL( 5, array[1]);
 
   
}

void test_swap_1_2_should_swap(void){
   
 int array[]= {1,2};
 swap( array, 0,1) ;
 TEST_ASSERT_EQUAL( 1, array[0]);
 TEST_ASSERT_EQUAL( 2, array[1]);
 
   
}

   
void test_bubbleSort_2_5_3_7_4_should_sort(void){

 int array[]= {2,5,3,7};
  bubbleSort  ( array,4);
 TEST_ASSERT_EQUAL( 2, array[0]);
 TEST_ASSERT_EQUAL( 3, array[1]);
 TEST_ASSERT_EQUAL( 5, array[2]);
 TEST_ASSERT_EQUAL( 7, array[3]);

}

   
 void test_bubbleSort_1_12_3_8_5_should_sort(void){

 int array[]= {1,12,3,8,5};
  bubbleSort  ( array,5);
 TEST_ASSERT_EQUAL( 1, array[0]);
 TEST_ASSERT_EQUAL( 3, array[1]);
 TEST_ASSERT_EQUAL( 5, array[2]);
 TEST_ASSERT_EQUAL( 8, array[3]);
 TEST_ASSERT_EQUAL( 12, array[4]);

}

void test_bubbleSort_100_23_67_12_should_sort(void){

 int array[]= {100,23,67,12};
  bubbleSort  ( array,5);
 TEST_ASSERT_EQUAL( 12, array[0]);
 TEST_ASSERT_EQUAL( 23, array[1]);
 TEST_ASSERT_EQUAL( 67, array[2]);
 TEST_ASSERT_EQUAL( 100, array[3]);

}


