/* 
 * File: Location.h
 * Name: Location
 * Description: Header file for Location class
 * Created on May 17, 2011, 5:26 PM
 */

#ifndef LOCATION_H_
#define	LOCATION_H_
#include <iostream>
#include <cstdlib>
#include <map>
#include "Item.h"

using namespace std;

/* Location class will store all information relevant to a particular location*/
class Location {
    string name;
    string description;
    Location* south;
    Location* north;
    Location* east;
    Location* west;
    map<string, Item*> items;
public:
    // Constructors
    Location(string, string);
    Location();

    // Attributes
    string getName(void);
    void setName(string name);
    string getDescription(void);
    void setDescription(string description);
    string printRoom(void);

    /* This set of methods will deal with Location linkage */
    Location* getNorth(void);
    Location* getSouth(void);
    Location* getEast(void);
    Location* getWest(void);
    void setNorth(Location* location);
    void setSouth(Location* location);
    void setEast(Location* location);
    void setWest(Location* location);
    bool hasNorth(void);
    bool hasSouth(void);
    bool hasEast(void);
    bool hasWest(void);


    /* This set of methods will deal with Items stored in this location */
    void addItem(string item_name, Item* item);
    int getItemCount();
    bool hasItem(string item_name);
    void removeItem(string item_name);
    string listItems(void);
    string listItemsDescription(void);

    // Destructor
    ~Location(void);
};

#endif
