#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, Add){
    Calculator calc;
    EXPECT_EQ(calc.add(2, 3), 5);
    EXPECT_EQ(calc.add(-2, 3), 1);
    EXPECT_EQ(calc.add(10, 3), 13);
}

TEST(CalculatorTest, Sub){
    Calculator calc;
    EXPECT_EQ(calc.sub(2, 3), -1);
    EXPECT_EQ(calc.sub(-2, 3), -5);
    EXPECT_EQ(calc.sub(10, 3), 7);
}

TEST(CalculatorTest, Mul){
    Calculator calc;
    EXPECT_EQ(calc.mul(2, 3), 6);
    EXPECT_EQ(calc.mul(-2, 3), -6);
    EXPECT_EQ(calc.mul(10, 3), 30);
}

TEST(CalculatorTest, Div){
    Calculator calc;
    EXPECT_EQ(calc.div(6, 3), 2);
    EXPECT_EQ(calc.div(-12, 3), -4);
    EXPECT_EQ(calc.div(10, 2), 5);
}

TEST(CalculatorTest, Mod){
    Calculator calc;
    EXPECT_EQ(calc.mod(4, 3), 1);
    EXPECT_EQ(calc.mod(-2, 3), -2);
    EXPECT_EQ(calc.mod(10, 3), 1);
}