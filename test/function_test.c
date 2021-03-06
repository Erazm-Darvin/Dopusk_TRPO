#include <ctest.h>
#include <../src/function.h>
#include <math.h>

CTEST(Proverka, input_1_1_1)
{
    int result = Proverka(1, 1, 1);
	
    int expected = 0;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Proverka, input_2_0_minus_2)
{
    int result = Proverka(2, 0, -2);
	
    int expected = 4;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Proverka, input_1_3_2)
{
	int result = Proverka(1, 3, 2);
	
    int expected = 2;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Discriment, input_3_2_1)
{
    float result = Discriment(3, 2, 1);
	
    float expected = -8;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Discriment, input_1_3_2)
{
    float result = Discriment(1, 3, 2);
	
    float expected = 1;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Discriment, input_floats_numbers)
{
    float result = Discriment(1.5 ,3.5 , 2.1);
	
    float expected = -0.35;
	
    ASSERT_DBL_NEAR(expected, result);
}

CTEST(Koren_Ur1, input_1_3_0)
{
    float result = Koren_Ur1(1, 3, 0);
	
    float expected = -1.5;
	
    ASSERT_EQUAL(expected, result);
}

CTEST(Koren_Ur2, input_4_21_361)
{
    float result = Koren_Ur2(4, 21, 361);
	
    float expected = -0.25;
	
     ASSERT_DBL_NEAR(expected, result);
}

CTEST(Koren_Ur3, input_4_21_361)
{
    float result = Koren_Ur3(4, 21, 361);
	
    float expected = -5;
	
     ASSERT_DBL_NEAR(expected, result);
}

CTEST(Koren_Ur1, input_floats_numbers)
{
    float result = Koren_Ur2(1.53125, 3.5, 0);
	
    float expected = -1.142857143;
	
     ASSERT_DBL_NEAR(expected, result);
}


