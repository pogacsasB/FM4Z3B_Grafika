#ifndef CUBE_H
#define CUBE_H

/**
 * Data of a circle object in Descartes coordinate system
 */
typedef struct Cube
{
	double x;
	double y;
	double z;
} Cube;

/**
 * Set the data of the cube
 */
void set_cube_data(Cube* cube, double x, double y, double z);

/**
 * Calculate the area of the cube.
 */
double calc_cube_volume(const Cube* cube);

double calc_cube_surface(const Cube* cube);

void cubic_side_search(const Cube* cube);

#endif // CUBE_H