# Cpp-problem-2

Problem Statement
You are given a int length. We have a regular hexagon: a polygon with six sides, 
in which all internal angles have 120 degrees and lengthis the length of each side. 
We are going to draw three non-intersecting diagonals in some way. 
These will divide the hexagon into four triangles. We will then compute their areas, 
take a piece of paper and write down the smallestof those four areas. 
Compute and return the largestnumber we can obtain on our piece of paper (by choosing which diagonals to draw).

Definition
Class:
MinimalTriangle

Method:
maximalArea

Parameters:
int

Returns:
double

Method signature:
double maximalArea(int length)
(be sure your method is public)

Notes
-Your return value must have a relative or an absolute error of less than 1e-9.
Constraints
-lengthwill be between 1 and 1,000,000 (10^6), inclusive.
Examples

0)
5
Returns: 10.825317547305485
1)
10
Returns: 43.30127018922194
2)
100000
Returns: 4.330127018922194E9
SRM 547 DIV 2
Problem A4
