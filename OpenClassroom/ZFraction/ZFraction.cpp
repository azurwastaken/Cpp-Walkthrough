#include "ZFraction.h"

/*
 *      Constructor
 */

ZFraction::ZFraction(int num, int den)
{
    this->numerator = num;
    this->denominator = den;
}


/*
 *      Destructor
 */

ZFraction::~ZFraction()
{
}

/*
 *      Methods
 */

bool ZFraction::isEqualTo(ZFraction const& b)
{
    return ((numerator * b.denominator) / denominator) == b.denominator;
}

bool ZFraction::isSmallerThan(ZFraction b)
{
    numerator *= b.denominator;
    b.numerator *= denominator;
    return numerator < b.numerator;
}

ZFraction ZFraction::isAddedWith(ZFraction const& b)
{
    int rNum = (numerator * b.denominator) + (b.numerator * denominator);
    int rDen = denominator * b.denominator;

    return ZFraction(rNum, rDen);
}

ZFraction ZFraction::isMultipliedBy(ZFraction const& b)
{
    int rNum = (numerator * b.numerator);
    int rDen = (denominator * b.denominator);

    return ZFraction(numerator * b.numerator);
}



/*
 *      Operators
 */

bool operator==(ZFraction const& a, ZFraction const& b)
{
    return a.isEqualTo(b);
}

bool operator!=(ZFraction a, ZFraction b)
{
    return !(a.isEqualTo(b));
}

bool operator>(ZFraction a, ZFraction b)
{
    return !(a.isSmallerThan(b) && a.isEqualTo(b));
}

bool operator>=(ZFraction a, ZFraction b)
{
    return !(a.isSmallerThan(b));
}

bool operator<(ZFraction a, ZFraction b)
{
    return a.isSmallerThan(b) && !(a.isEqualTo(b));
}

bool operator<(ZFraction a, ZFraction b)
{
    return a.isSmallerThan(b) || a.isEqualTo(b);
}

ZFraction operator+(ZFraction a, ZFraction b)
{
    return a.isAddedWith(b);
}

ZFraction operator*(ZFraction a, ZFraction b)
{
    return a.isMultipliedBy(b);
}