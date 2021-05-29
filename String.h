#pragma once
#include "iostream"
#include <cstring>

class String
{
private:
    char *data;
    size_t size;
    size_t capacity;
public:
    String();
    String(const String &);
    String &operator=(const String &); 
    String(size_t size); 
    String(const char *data);
    ~String();

    const char& operator[](size_t x) const;
	char& operator[](size_t x);
    bool operator==(const String &)const;
    bool operator<(const String &);
    bool operator>(const String &);
    int getSize()const;
    int getCapacity()const;
    

    friend std::istream& operator>>(std::istream& input,  String& other);
    friend std::ostream& operator<<(std::ostream& out, const String& other);
    

};
#include "String.cpp"