#include <gtest/gtest.h>
#include "mathengine.h"

class MathEngineTest : public testing::Test
{
protected:

    MathEngine*         mMathEnginePtr;
    Task                task;

    void SetUp() override
    {
        mMathEnginePtr = new MathEngine();
    }

    void TearDown() override
    {
      delete mMathEnginePtr;
    }
};

TEST_F(MathEngineTest, Addition)
{
    task.Data = {1,2,3,4.5};
    task.Op = MathOp::Add;
    EXPECT_EQ(mMathEnginePtr->Run(task),10.5);
}

TEST_F(MathEngineTest, Subs)
{
    task.Data = {10,20.5};
    task.Op = MathOp::Sub;
    EXPECT_EQ(mMathEnginePtr->Run(task),-10.5);
}

TEST_F(MathEngineTest, Multiply)
{
    task.Data = {2,3.5};
    task.Op = MathOp::Multi;
    EXPECT_EQ(mMathEnginePtr->Run(task),7);
}

TEST_F(MathEngineTest, Division)
{
    task.Data = {6,3};
    task.Op = MathOp::Div;
    EXPECT_EQ(mMathEnginePtr->Run(task),2);
}

TEST_F(MathEngineTest, Sin)
{
    task.Data = {90};
    task.Op = MathOp::Sin;
    EXPECT_EQ(mMathEnginePtr->Run(task),1);;
}

TEST_F(MathEngineTest, Cos)
{
    task.Data = {180};
    task.Op = MathOp::Cos;
    EXPECT_EQ(mMathEnginePtr->Run(task),-1);
}

TEST_F(MathEngineTest, Tan)
{
    task.Data = {45};
    task.Op = MathOp::Tan;
    EXPECT_EQ(mMathEnginePtr->Run(task),1);
}

TEST_F(MathEngineTest, ASin)
{
    task.Data = {0};
    task.Op = MathOp::Asin;
    EXPECT_EQ(mMathEnginePtr->Run(task),0);
}

TEST_F(MathEngineTest, ACos)
{
    task.Data = {0};
    task.Op = MathOp::Acos;
    EXPECT_EQ(mMathEnginePtr->Run(task),1.5707963267948966);
}
/* commenting out 
TEST_F(MathEngineTest, ATan)
{
    task.Data = {180};
    task.Op = MathOp::Atan;
    EXPECT_EQ(mMathEnginePtr->Run(task),1.56);
}
*/
TEST_F(MathEngineTest, CubicRoot)
{
    task.Data = {27};
    task.Op = MathOp::CuRt;
    EXPECT_EQ(mMathEnginePtr->Run(task),3);
}

TEST_F(MathEngineTest, Cubed)
{
    task.Data = {3};
    task.Op = MathOp::Cubed;
    EXPECT_EQ(mMathEnginePtr->Run(task),27);
}

TEST_F(MathEngineTest, SquareRoot)
{
    task.Data = {144};
    task.Op = MathOp::Sqrt;
    EXPECT_EQ(mMathEnginePtr->Run(task),12);
}

TEST_F(MathEngineTest, Squared)
{
    task.Data = {12};
    task.Op = MathOp::Squared;
    EXPECT_EQ(mMathEnginePtr->Run(task),144);
}

TEST_F(MathEngineTest, PowerOf)
{
    task.Data = {10,3};
    task.Op = MathOp::Exp;
    EXPECT_EQ(mMathEnginePtr->Run(task),1000);
}

TEST_F(MathEngineTest, TenToPowerOf_X)
{
    task.Data = {10,2}; // works same as power of. We need to push the num and the exponent. 10 is not hardcoded
    task.Op = MathOp::TenTo;
    EXPECT_EQ(mMathEnginePtr->Run(task),100);
}

TEST_F(MathEngineTest, Log)
{
    task.Data = {25};
    task.Op = MathOp::Log;
    EXPECT_EQ(mMathEnginePtr->Run(task),1.3979400086720377);
}

TEST_F(MathEngineTest, NaturalLog)
{
    task.Data = {25};
    task.Op = MathOp::LogN;
    EXPECT_EQ(mMathEnginePtr->Run(task),3.2188758248682006);
}

TEST_F(MathEngineTest, eToPowerOfX)
{
    task.Data = {mMathEnginePtr->e,2};
    task.Op = MathOp::EtoExp;
    EXPECT_EQ(mMathEnginePtr->Run(task),7.3890560988814746);
}

TEST_F(MathEngineTest, FactorialOf)
{
    task.Data = {5};
    task.Op = MathOp::Fact;
    EXPECT_EQ(mMathEnginePtr->Run(task),120);
}

TEST_F(MathEngineTest, Mean)
{
    task.Data = {10,20,30,40};
    task.Op = MathOp::Mean;
    EXPECT_EQ(mMathEnginePtr->Run(task),25);
}

TEST_F(MathEngineTest, MedianOddList)
{
    task.Data = {9, 10, 12, 13, 13, 13, 15, 15, 16, 16, 18, 22, 23, 24, 24};
    task.Op = MathOp::Median;
    EXPECT_EQ(mMathEnginePtr->Run(task),15);
}

TEST_F(MathEngineTest, MedianEvenList)
{
    task.Data = {9, 10, 12, 13, 13, 13, 15, 15, 16, 16, 18, 22, 23, 24, 24, 25};
    task.Op = MathOp::Median;
    EXPECT_EQ(mMathEnginePtr->Run(task),15.5);
}

