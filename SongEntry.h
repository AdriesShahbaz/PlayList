//
// Created by adries on 2021-01-25.
//

#ifndef ECE250_PROJECT_0_SONGENTRY_H
#define ECE250_PROJECT_0_SONGENTRY_H

#include <string>

class SongEntry
{

    // Class Variables
private:
    std::string songName;   // Song Name
    std::string artistName; // Artist Name

    // Class Functions
public:
    SongEntry(const std::string &sName, const std::string &aName);
    SongEntry();
    ~SongEntry();

    SongEntry& operator=(const SongEntry& other) ;

    void print();
    std::string getSongName();
    std::string getArtistName();
};

#endif //ECE250_PROJECT_0_SONGENTRY_H
