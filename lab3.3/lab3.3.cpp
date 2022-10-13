#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	double y; 
	double R;
	cout << "x = "; cin >> x;
	cout << "R = "; cin >> R;

	if (x <= (-1) * (-R))
		y = 1;
	else
		if (-1 * (-R) < x && x < (-1))
			y = sqrt((x * x) - (x + 1) * (x + 1));
		else
			if (-1 <= x && x <= 2)
				y = -R;
			else
				y = (-R + (0 + R) / (4 - 2) * (x - 2));
				
	cout << "y = " << y << endl;
	
	return 0;
}

