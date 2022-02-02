//
// Created by bigbl on 2/1/2022.
//

#include "string"
#include "vector"
#include "iostream"
#include "fstream"
#ifndef TESTPROJECT_BAG_H
#define TESTPROJECT_BAG_H

using namespace std;

class Bag {

public:
    int numOfItems;

    // Vector method best way. Can use Static if we really about that life.
    vector<string> animeList;

    /* Getters and Setters for Function Calls*/
    int getNumOfItems() const;

    void setNumOfItems(int numOfItems);

    const vector<string> &getAnimeList() const;

    void setAnimeList(const vector<string> &animeList);

    /** Function to define current value in array */
    void checkValue();
    void displayAll();
    void searchAutoComplete();
    void loadFile();

};


#endif //TESTPROJECT_BAG_H
