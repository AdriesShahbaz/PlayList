/**
    ECE250
    SongEntry.cpp
    Purpose: Class to store the information of a song.

    Author Adries Shahbaz
    Version 1.0  - 24/01/2021
*/

#include <iostream>

#include <string.h>

#include <string>

#include "SongEntry.h"

SongEntry::SongEntry(const std::string &sName, const std::string &aName)
{
    songName = sName;
    artistName = aName;
}

SongEntry::SongEntry()
{
    songName = "";
    artistName = "";
}

SongEntry& SongEntry::operator=(const SongEntry& other) {
    SongEntry tmp(other);

    std::swap(songName, tmp.songName);
    std::swap(artistName, tmp.artistName);

    return *this;
}

std::string SongEntry::getSongName() {
    return songName;
}

std::string SongEntry::getArtistName() {
    return artistName;
}

void SongEntry::print()
{
    std::cout << songName << ";" << artistName << std::endl;
}


SongEntry::~SongEntry()
{
}