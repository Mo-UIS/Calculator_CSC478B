#include "unitsconversion.h"
#include <stdexcept>

UnitsConversion::UnitsConversion()
{
}

UnitsConversion::~UnitsConversion()
{
}

/*
Unit conversion Engine to control flow of data for unit coversion operations
(Requirement 3.6.2 )

*/
double UnitsConversion::Convert(Units unit, double value)
{
    switch(unit)
    {
    case (Units::InToFt):
        return InchesToFeet(value);
        break;

    case (Units::FtToIn):
        return FeetToInches(value);
        break;

    case (Units::OzToGr):
        return OuncesToGrams(value);
        break;

    case (Units::GrToOz):
        return GramsToOunces(value);
        break;

    case (Units::LtToGal):
        return LitersToGallons(value);
        break;

    case (Units::GalToLt):
        return GallonsToLiters(value);
        break;

    case (Units::RadToDeg):
        return RadToDegrees(value);
        break;

    case (Units::DegToRad):
        return DegreeToRad(value);
        break;


    default:
        throw std::runtime_error("Undefined unit conversion operation!");

    }
}
/*

Converts feet to inches

(Requirement 3.4.2)

*/

double UnitsConversion::FeetToInches(double num)
{
    return num * 12 ;
}
/*

Converts inches to feet

(Requirement 3.4.1)

*/
double UnitsConversion::InchesToFeet(double num)
{
    return num / 12 ;
}
/*

Converts ounces to grams

(Requirement 3.4.3)

*/
double UnitsConversion::OuncesToGrams(double num)
{
    return (num / 0.035275) ;
}
/*

Converts grams to ounces

(Requirement 3.4.4)

*/
double UnitsConversion::GramsToOunces(double num)
{
    return (num * 0.035275) ;
}
/*

Converts gallons to liters

(Requirement 3.4.7)

*/
double UnitsConversion::GallonsToLiters(double num)
{
    return (num / 0.264172);
}
/*

Converts liters to gallons

(Requirement 3.4.8)

*/
double UnitsConversion::LitersToGallons(double num)
{
    return (num * 0.264172);
}
/*

Converts degree to radians

(Requirement 3.4.6)

*/
double UnitsConversion::DegreeToRad(double num)
{
    return (num * (3.14159265359/180));
}
/*

Converts degree to radians

(Requirement 3.4.5)

*/
double UnitsConversion::RadToDegrees(double num)
{
    return (num * (180/3.14159265359));
}
