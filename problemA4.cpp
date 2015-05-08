


#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <limits>
using namespace std;

class MinimalTriangle{

public:
	
	double maximalArea(int length){


		double w = length * sqrt(3);

		//calculate area of isosceles traingle.

		double base =  w;
		double s, area_iso_tri;		
		area_iso_tri = areaOfTraingle(length, length, base);

		//calculate area of reactangle traingle.

		double height = w, area_rec_tri;		
		area_rec_tri = areaOfTraingle(length, 2 * length, height);

		return min(area_iso_tri, area_rec_tri);
	}   


private:

	double areaOfTraingle(double a, double b, double c){

		double s = (a + b + c) / 2;
		return sqrt(s*(s - a)*(s - b)*(s - c));

	}

	double min(double a, double b){

		if (a < b)
		return a;
		return b;

	}



};

int _tmain(int argc, _TCHAR* argv[])
{
	MinimalTriangle test1;
	cout.precision(17);
	cout << test1.maximalArea(5) << endl;
	cout.precision(16);
	cout << test1.maximalArea(10) << endl;
	cout << scientific<< test1.maximalArea(100000) << endl;
	
	getchar();


	return 0;
}

