/* 
 * File:   Parser.h
 * Author: gphillips
 *
 * Created on May 17, 2011, 5:26 PM
 */

#ifndef LOCATION_H
#define	LOCATION_H
#include <iostream>
#include <cstdlib>
#include "Item.h"
#include <list>
using namespace std;

/* Location class will store all information relevant to a particular location*/
class Location {
public:
    Location(string, string, list<int>);
    Location();

    // Details
    string getName(void);
    void setName(string name);
    string getDescription(void);
    void setDescription(string description);
    
    // Directions
    Location* getNorth(void);
    Location* getSouth(void);
    Location* getEast(void);
    Location* getWest(void);
    void setNorth(Location* location);
    void setSouth(Location* location);
    void setEast(Location* location);
    void setWest(Location* location);
    
    // Items
    void addItem(Item item);
    void removeItem(Item item);
    string listItems(void);
    
    // Object Deletion
    ~Location(void);
private:
    string name;
    string description;
    Location* south;
    Location* north;
    Location* east;
    Location* west;
    map<Item> items;
};

#endif