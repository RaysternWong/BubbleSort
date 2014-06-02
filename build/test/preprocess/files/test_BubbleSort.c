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

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)20, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);





}



void test_swap_1_2_should_swap(void){



 int array[]= {1,2};

 swap( array, 0,1) ;

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)30, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)31, UNITY_DISPLAY_STYLE_INT);





}





void test_bubbleSort_2_5_3_7_4_should_sort(void){



 int array[]= {2,5,3,7};

  bubbleSort ( array,4);

 UnityAssertEqualNumber((_U_SINT)((2)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)42, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)43, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)44, UNITY_DISPLAY_STYLE_INT);



}





 void test_bubbleSort_1_12_3_8_5_should_sort(void){



 int array[]= {1,12,3,8,5};

  bubbleSort ( array,5);

 UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)53, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)54, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((5)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)55, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((12)), (_U_SINT)((array[4])), (((void *)0)), (_U_UINT)57, UNITY_DISPLAY_STYLE_INT);



}



void test_bubbleSort_100_23_67_12_should_sort(void){



 int array[]= {100,23,67,12};

  bubbleSort ( array,5);

 UnityAssertEqualNumber((_U_SINT)((12)), (_U_SINT)((array[0])), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((23)), (_U_SINT)((array[1])), (((void *)0)), (_U_UINT)66, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((67)), (_U_SINT)((array[2])), (((void *)0)), (_U_UINT)67, UNITY_DISPLAY_STYLE_INT);

 UnityAssertEqualNumber((_U_SINT)((100)), (_U_SINT)((array[3])), (((void *)0)), (_U_UINT)68, UNITY_DISPLAY_STYLE_INT);



}
