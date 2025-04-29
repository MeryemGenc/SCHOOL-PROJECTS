#ifndef FILE_REPLACE_HPP
# define FILE_REPLACE_HPP
#include <iostream>
#include <fstream>
#include <string>

// 3 param - s1 - s2 - filename
// dosya manipülasyon ve string->replace kullanılması yasak

class FileReplace
{
    public:
        FileReplace();
        ~FileReplace();
        std::string ft_replace(std::string file_str, std::string s1, std::string s2);
};

#endif