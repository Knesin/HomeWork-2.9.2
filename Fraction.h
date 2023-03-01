#pragma once
#include<iostream>
class Fraction
{
private:
	int numerator_;
	int denominator_;
	int nod(const int n, const int d);
public:
	Fraction(int numerator, int denominator);
	bool operator== (const Fraction& right);
	bool operator!= (const Fraction& right);
	bool operator<  (const Fraction& right);
	bool operator>  (const Fraction& right);
	bool operator<= (const Fraction& right);
	bool operator>= (const Fraction& right);
	friend std::ostream& operator<< (std::ostream& left, Fraction right);
	Fraction operator+ (Fraction& right);
	Fraction operator- (Fraction& right);
	Fraction operator* (Fraction& right);
	Fraction operator/ (Fraction& right);
	Fraction operator++ ();
	Fraction operator++ (int);
	Fraction operator-- ();
	Fraction operator-- (int);
};

