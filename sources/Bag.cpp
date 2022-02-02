//
// Created by bigbl on 2/1/2022.
//

#include "Bag.h"

void Bag::checkValue() {

}

void Bag::displayAll() {

}

void Bag::searchAutoComplete() {

}



/** Getter and Setters for Both the Number of Items
 *  And the values in the array.
 */

int Bag::getNumOfItems() const {
    return numOfItems;
}

void Bag::setNumOfItems(int numOfItems) {
    Bag::numOfItems = numOfItems;
}

const vector<string> &Bag::getAnimeList() const {
    return animeList;
}

void Bag::setAnimeList(const vector<string> &animeList) {
    Bag::animeList = animeList;
}

void Bag::loadFile() {
    ifstream inFile;
    string line;
    inFile.open("scratch.txt");

    while(inFile >> line) {
        animeList.push_back(line);
    }
}

