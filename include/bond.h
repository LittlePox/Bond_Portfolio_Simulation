#ifndef BOND_H
#define BOND_H

class bond
{
public:
    enum bond_type {TREASURY, INVESTMENT_GRADE, HIGH_YIELD};
    bond();
    virtual get_bond_type();
    virtual ~bond();
    const double principle;
    const double coupon_rate;
    const int frequency;

protected:

private:
};

#endif // BOND_H
