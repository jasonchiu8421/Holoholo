#ifndef SILVERCHECKPOINT_H
#define SILVERCHECKPOINT_H

#include <iostream>
#include <string>
#include "SilverBook.h"

class SilverBook; // Forward declaration of SilverBook class

class SilverCheckpoint {
public:
    SilverCheckpoint(std::string name, bool if_unlocked, double longitude, double latitude, int ID, std::string image, SilverBook& silverBook);

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

    SilverBook& getSilverBook() const;
    void setSilverBook(SilverBook& newSilverBook);

private:
    std::string name;
    bool if_unlocked;
    double longitude;
    double latitude;
    int ID;
    std::string image;
    SilverBook& silverBook;
};

#endif /* SILVERCHECKPOINT_H */
