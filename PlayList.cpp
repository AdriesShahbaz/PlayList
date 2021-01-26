/**
    ECE250
    PlayList.cpp
    Purpose: Class to store the information of a playlist of songs.

    Author Adries Shahbaz
    Version 1.0  - 24/01/2021
*/

#include <iostream>
#include <locale>
#include <string.h>

#include "PlayList.h"
#include "SongEntry.h"

PlayList::PlayList()
{
}

std::string PlayList::lower(const std::string &s) {
    std::locale loc;
    std::string tmp;
    for (int i = 0; i < s.length(); i++) {
        tmp.push_back(std::tolower(s[i], loc));
    }
    return tmp;
}

bool PlayList::search(const std::string &song, const std::string &artist)
{
    for (int i = 0; i < size; ++i)
    {
        if (lower((songs[i].getSongName())) == song && (lower(songs[i].getArtistName()) == artist))
        {
            return true;
        }
    }
    return false;
}

void PlayList::setSize(const size_t &n) {
    size = n;
    songs = new SongEntry[n];

    for (int i = 0; i < size; i++) {
        songs[i] = SongEntry();
    }
}

void PlayList::add(const std::string &song, const std::string &artist)
{
    int n = 0;
    while (n < size && songs[n].getSongName() != "")
    {
        n++;
    }
    if (n >= size || search(song, artist) == true)
    {
        std::cout << "can not insert " << song << ";" << artist << std::endl;
    }
    else
    {
        songs[n] = SongEntry(song, artist);
        std::cout << "success" << std::endl;
    }
}

void PlayList::play(const int &position)
{
    if (position > size || position < 1 || (songs[position-1].getSongName() == ""))
    {
        std::cout << "can not play " << position << std::endl;
    }
    else
    {
        std::cout << "played " << position << " ";
        songs[position - 1].print();
    }
}

void PlayList::erase(const int &position)
{
    if (position >= size || position < 1 || (songs[position-1].getSongName() == ""))
    {
        std::cout << "can not erase " << position << std::endl;
    }
    else
    {
        int i = position;
        songs[i - 1] = SongEntry();
        for (i = position; i < size; ++i)
        {
            songs[i - 1] = songs[i];
        }
        songs[i - 1] = SongEntry();
        std::cout << "success" << std::endl;
    }
}

PlayList::~PlayList()
{
    delete[] songs;
}