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

/** Load File Helper Method*/

void Bag::loadFile() {
    ifstream inFile;
    string line;
    inFile.open("C:\\Users\\Adam\\CLionProjects\\autoComplete\\assests\\scratch.txt"); //Absolute path for now cause im bad.

    /* Check if file is open, if it isn't we are going to push a value into animelist in the vector */
    if(inFile.is_open()) {
        while (std::getline(inFile, line)) {
            animeList.push_back(line);
            cout << line;
        }
        inFile.close();
    } else {
        cout << "This shit broke";
    }
}

