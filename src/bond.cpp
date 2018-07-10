#include "bond.h"

bond::bond(const bond_type type, const int frequency, const double notional, const date& maturity_date, const double coupon_rate)
:type(type)
,frequency(frequency)
,notional(notional)
,maturity_date(maturity_date)
,coupon_rate_(coupon_rate)
{
    par_ = notional;
}
