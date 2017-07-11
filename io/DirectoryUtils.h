//
// Created by fifal on 11.7.17.
//

#ifndef FILE_BROWSER_DIRECTORYUTILS_H
#define FILE_BROWSER_DIRECTORYUTILS_H

#include <sys/types.h>
#include <dirent.h>
#include <iostream>
#include <vector>


class DirectoryUtils {
public:
    static std::vector<std::string> list_dir(std::string path);
};


#endif //FILE_BROWSER_DIRECTORYUTILS_H
