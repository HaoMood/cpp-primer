/*
 * C++ Primer
 * Chap. 8 Ex. 8.10
 * Hao Zhang
 * 2016.09.13
 * File_content.h
 */

#ifndef FILE_CONTENT_H_
#define FILE_CONTENT_H_

#include <vector>
using std::vector;

#include <string>
using std::string;

class File_content
{
private:
    vector<string> _content;

public:
    File_content() = default;

    void read(const string &file_path);
    void print() const;
};

#endif
