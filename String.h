#pragma once
#include "iostream"
#include <cstring>

class String
{
private:
    char *data;
    size_t size;
public:
    String();
    String(const String &);
    String &operator=(const String &); 
    String(size_t size); 
    String(const char *data);
    ~String();
    int getSize()const;

    friend std::istream& operator>>(std::istream& input, const String& other);
    friend std::ostream& operator<<(std::ostream& out, const String& other);
    

};
#include "String.cpp"