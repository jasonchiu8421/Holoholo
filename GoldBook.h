#ifndef GOLDBOOK_H
#define GOLDBOOK_H

#include <iostream>
#include <string>
#include <vector>
#include "GoldCheckpoint.h"

class GoldCheckpoint; // Forward declaration of GoldCheckpoint class

class GoldBook {
public:
    GoldBook(int ID, std::string name);

    int getID() const;
    void setID(int newID);

    std::string getName() const;
    void setName(std::string newName);

    std::vector<GoldCheckpoint>& getCheckpoints();
    void addCheckpoint(const GoldCheckpoint& checkpoint);
    void removeCheckpoint(int checkpointID);

private:
    int ID;
    std::string name;
    std::vector<GoldCheckpoint> checkpoints;
};

#endif /* GOLDBOOK_H */
