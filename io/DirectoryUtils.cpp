//
// Created by fifal on 11.7.17.
//

#include "DirectoryUtils.h"

std::vector<std::string> DirectoryUtils::list_dir(std::string path) {
    std::vector<std::string> files = std::vector<std::string>();

    DIR *dp;
    struct dirent *dirp;
    if ((dp = opendir(path.c_str())) == NULL) {
        std::cout << "Error(" << errno << ") opening " << path << std::endl;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(std::string(dirp->d_name));
        std::cout << dirp->d_name << std::endl;
    }
    closedir(dp);

    return files;
}