//
// Created by bigbl on 2/1/2022.
//

#include "string"
#include "vector"
#include "iostream"
#ifndef TESTPROJECT_BAG_H
#define TESTPROJECT_BAG_H

using namespace std;

class Bag {

public:
    int numOfItems;


    // Vector method best way. Can use Static if we really about that life.
    vector<string> animeList;

    /** Function to define current value in array */
    void checkValue();
    void displayAll();
    void searchAutoComplete();

};


#endif //TESTPROJECT_BAG_H
