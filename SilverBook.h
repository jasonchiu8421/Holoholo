#ifndef SILVERBOOK_H
#define SILVERBOOK_H

#include <iostream>
#include <string>
#include <vector>
#include "SilverCheckpoint.h"

class SilverCheckpoint; // Forward declaration of SilverCheckpoint class

class SilverBook {
public:
    SilverBook(int ID, std::string name);

    int getID() const;
    void setID(int newID);

    std::string getName() const;
    void setName(std::string newName);

    std::vector<SilverCheckpoint>& getCheckpoints();
    void addCheckpoint(const SilverCheckpoint& checkpoint);
    void removeCheckpoint(int checkpointID);

private:
    int ID;
    std::string name;
    std::vector<SilverCheckpoint> checkpoints;
};

#endif /* SILVERBOOK_H */
