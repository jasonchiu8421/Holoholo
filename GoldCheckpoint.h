#ifndef GOLDCHECKPOINT_H
#define GOLDCHECKPOINT_H

#include <iostream>
#include <string>
#include "GoldBook.h"

class GoldBook; // Forward declaration of GoldBook class

class GoldCheckpoint {
public:
    GoldCheckpoint(std::string name, bool if_unlocked, double longitude, double latitude, int ID, std::string image, GoldBook& goldBook);

    std::string getName() const;
    void setName(std::string newName);

    bool getIfUnlocked() const;
    void setIfUnlocked(bool newIfUnlocked);

    double getLongitude() const;
    void setLongitude(double newLongitude);

    double getLatitude() const;
    void setLatitude(double newLatitude);

    int getID() const;
    void setID(int newID);

    std::string getImage() const;
    void setImage(std::string newImage);

    GoldBook& getGoldBook() const;
    void setGoldBook(GoldBook& newGoldBook);

private:
    std::string name;
    bool if_unlocked;
    double longitude;
    double latitude;
    int ID;
    std::string image;
    GoldBook& goldBook;
};

#endif /* GOLDCHECKPOINT_H */
