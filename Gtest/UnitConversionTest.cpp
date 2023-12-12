#include <gtest/gtest.h>
#include "unitsconversion.h"

class UnitsConversionTest : public testing::Test
{
protected:

    UnitsConversion*         mUnitsConversionPtr;

    void SetUp() override
    {
        mUnitsConversionPtr = new UnitsConversion();
    }

    void TearDown() override
    {
      delete mUnitsConversionPtr;
    }
};


TEST_F(UnitsConversionTest, InchToFeet)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::InToFt,60),5);
}

TEST_F(UnitsConversionTest, FeetToInches)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::FtToIn,50),600);
}

TEST_F(UnitsConversionTest, GramsToOz)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::GrToOz,1000),35.275);
}

TEST_F(UnitsConversionTest, OzToGrams)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::OzToGr,16),453.57902197023384);
}

TEST_F(UnitsConversionTest, LitersToGallons)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::LtToGal,5),1.3208600000000001);
}

TEST_F(UnitsConversionTest, GallonsToLiters)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::GalToLt,10),37.854125342579835);
}

TEST_F(UnitsConversionTest, RadToDegrees)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::RadToDeg,1.5708),90.000210459143787);
}

TEST_F(UnitsConversionTest, DegreesToRad)
{
    EXPECT_EQ(mUnitsConversionPtr->Convert(Units::DegToRad,31),0.54105206811827777);
}



