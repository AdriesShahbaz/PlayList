#include <iostream>
#include <string.h>
#include <string>

#include "PlayList.h"

int main()
{
    std::string line;

    PlayList p;

    while (true) {
        if (std::cin.eof()) {
            break;
        }

        getline(std::cin, line);

        if (line == "exit") {
            break;
        }

        int pos = line.find(" ");
        std::string cmd = line.substr(0, pos);
        std::string obj = line.substr(pos+1);

        if (cmd == "m") {
            size_t n = stoi(obj);
            p.setSize(n);
            std::cout << "success" << std::endl;
        }

        else if (cmd == "i") {
            int delimPos = obj.find(";");
            std::string song = obj.substr(0, delimPos);
            std::string artist = obj.substr(delimPos+1);

            p.add(song, artist);
        }

        else if (cmd == "p") {
            int pos = stoi(obj);
            p.play(pos);
        }

        else if (cmd == "e") {
            int pos = stoi(obj);
            p.erase(pos);
        }
    }
    return 0;
}