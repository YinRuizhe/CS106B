
#ifndef _direction_h
#define _direction_h

#include <string>


enum Direction
{
	NORTH, EAST, SOUTH, WEST
};



Direction leftFrom(Direction dir);


Direction rightFrom(Direction dir);


std::string directionToString(Direction dir);

#endif
