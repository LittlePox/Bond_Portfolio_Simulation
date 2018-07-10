#ifndef BOND_H
#define BOND_H

#include "boost/date_time/gregorian/gregorian.hpp"

using namespace boost::gregorian;

class bond
{
public:
    enum bond_type {TREASURY, INVESTMENT_GRADE, HIGH_YIELD};
    bond(const bond_type type, const int frequency, const double notional, const date& maturity_date, const double coupon_rate);
    virtual ~bond() {};

    const bond_type type;
    const int frequency;
    const double notional;
    const date maturity_date;

    virtual inline double get_par() const
    {
        return par_;
    }

    virtual inline double get_coupon_rate() const
    {
        return coupon_rate_;
    }


protected:
    double coupon_rate_, par_;
};

#endif // BOND_H
