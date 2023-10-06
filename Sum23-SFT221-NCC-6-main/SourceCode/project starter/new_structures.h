// new_structures.h

#pragma once
#ifndef NEW_STRUCTURES_H
#define NEW_STRUCTURES_H

/**
* A new data structure to represent a Truck.
*/
struct Truck
{
   char* id;
   struct Route route;
   struct Point currentLocation;
};

/**
* A new data structure to represent a Depot.
*/
struct Depot
{
   struct Point location;
   struct Truck* trucks;
   int numTrucks;
};

#endif
