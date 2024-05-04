#include <iostream>
#define  PI  3.1415926;
#define  AREA(r)  PI * r * r;
using namespace std;
int main()
{
	double radius, s;
	cout << "Enter the radius of a circle: ";
	cin >> radius;
	s = AREA(radius);
	cout << "radius=" << radius << "The area is " << s << "\n";
	s = AREA(radius + 1);
	cout << "radius=" << (radius + 1) << "The area is " << s << "\n";
	return 0;
}