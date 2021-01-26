//
// Created by adries on 2021-01-25.
//

#ifndef ECE250_PROJECT_0_PLAYLIST_H
#define ECE250_PROJECT_0_PLAYLIST_H

#include "SongEntry.h"

#include <string>

class PlayList
{

    // Class Variables
private:
    size_t size;
    SongEntry *songs;

    std::string lower(const std::string &s);
    bool search(const std::string &song, const std::string &artist);

    // Class Functions
public:
    PlayList();
    ~PlayList();

    void setSize(const size_t &n);
    void add(const std::string &song, const std::string &artist);
    void play(const int &position);
    void erase(const int &position);
    void clear(const int &position);
};

#endif //ECE250_PROJECT_0_PLAYLIST_H
