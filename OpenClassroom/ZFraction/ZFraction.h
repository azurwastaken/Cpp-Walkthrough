#if !defined(__ZFRACTION__)
#define __ZFRACTION__

#include <iostream>

class ZFraction
{
    public:
        //constructor
        ZFraction(int num, int den = 1);

        //comparaison
        bool isEqualTo(ZFraction const& b);
        bool isSmallerThan(ZFraction b);
        
        //operation
        ZFraction isMultipliedBy(ZFraction const& b);
        ZFraction isAddedWith(ZFraction const& b);
        
        //display
        std::string toString();
    
    private:
        int numerator;
        int denominator;
};

#endif