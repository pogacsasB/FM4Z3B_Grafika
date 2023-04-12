#include "cube.h"
#include <math.h>
#include <stdio.h>

double calc_cube_size(const Cube* cube);
double calc_cube_volume(const Cube* cube);
void cubic_side_search(const Cube* cube);

void set_cube_data(Cube* cube, double x, double y, double z)
{
	if (x > 0.0) {
		cube->x = x;
	} else {
		cube->x = NAN;
	}
	if (y > 0.0) {
		cube->y = y;
	} else {
		cube->y = NAN;
	}
	if (z > 0.0) {
		cube->z = z;
	} else {
		cube->z = NAN;
	}
}

double calc_cube_volume(const Cube* cube)
{
	double volume = cube->x * cube->y * cube->z;
	return volume;
}

double calc_cube_surface(const Cube* cube)
{
	double surface = 2 * (cube->x * cube->y + cube->x * cube->z + cube->y * cube->z);
	return surface;
}

void cubic_side_search(const Cube* cube) {
	
	if (cube->x == cube->y) {
		printf("Yes, side: x and y");
	} else if (cube->y == cube->z) {
		printf("Yes, side: y and z");
	} else if (cube->x == cube->z) {
		printf("Yes, side: x and z");
	} else {
		printf("No");
	}
}