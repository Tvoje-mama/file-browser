#include <iostream>
#include "io/DirectoryUtils.h"

int main() {
    std::vector<std::string> files = DirectoryUtils::list_dir("/home/fifal/Pictures");
    return 0;
}