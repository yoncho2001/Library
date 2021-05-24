#pragma once
#include "String.h"

String::String()
{
    this->data = nullptr;
    this->size = 0;
}
String::String(const String& other)
{
	this->size = other.size;
	this->data = new char[size];
	for (size_t i = 0; i < size;++i) {
		this->data[i] = other.data[i];
	}
}
String& String::operator=(const String& other)
{
	if (this != &other) {
		delete[] this->data;
		this->size = other.size;
		this->data = new char[size];
		for (size_t i = 0; i < size; ++i) {
			this->data[i] = other.data[i];
		}
	}
	return *this;
}
String::String(size_t size)
{
	this->size = size;
	this->data = new char[size];
}

String::String(const char* data)
{

    this->size = strlen (data);
	this->data = new char[size];
	for (size_t i = 0; i < size; ++i)
	{
		this->data[i] = data[i];
	}
}
String::~String()
{
	delete[] this->data;
	this->size = 0;
}
int String::getSize()const
{
  return size;
}


std::istream& operator>>(std::istream& input, const String& other)
{
    input.ignore();
    input.getline(other.data, other.size);
    return input;
}
std::ostream& operator<<(std::ostream& out, const String& other)
{
	for (size_t i = 0; i < other.size; ++i)
    {
		out << other.data[i];
    }
    return out;
}
