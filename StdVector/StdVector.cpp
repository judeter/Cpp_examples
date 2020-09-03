#include <iostream>
#include <vector>
#include <cmath>

struct point
{
	double x;
	double y;
	double z;
};

int main(void)
{
	
	std::vector<point> points;
	
	// Create a pointer a point structure.
	point* new_point;

	for (double dx = 0.0; dx < 10.0; dx+=1.0) 
	{
		// Allowcate new memory for the next point.
		new_point = new point;
		new_point->x = dx;
		new_point->y = dx * dx;
		points.push_back(*new_point);
	}
	for (const auto& pt : points) 
	{
		std::cout << "X: " << pt.x << "Y: " << pt.y << "Z: " << pt.z  << std::endl;
	}



	return 0;
}