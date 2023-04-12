#include "cube.h"

#include <stdio.h>

int main(int argc, char* argv[])
{
	Cube cube;
	double surface;
	double volume;
	
	set_cube_data(&cube, 5, 5, 8);
	volume = calc_cube_volume(&cube);
	surface = calc_cube_surface(&cube);
	
	printf("Cube volume: %lf\n", volume);
	printf("Cube surface: %lf\n", surface);
	
	cubic_side_search(&cube);
	
	return 0;
}