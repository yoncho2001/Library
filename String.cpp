#pragma once
#include "String.h"

String::String()
{
    this->data = nullptr;
    this->size = 0;
	this->capacity = 100;
}
String::String(const String& other)
{
	this->size = other.size;
	this->capacity = other.capacity;
	this->data = new char[capacity];
	for (size_t i = 0; i < size;++i) {
		this->data[i] = other.data[i];
	}
}
String& String::operator=(const String& other)
{
	if (this != &other) {
		delete[] this->data;
		this->size = other.size;
		this->capacity = other.capacity;
		this->data = new char[capacity];
		for (size_t i = 0; i < size; ++i) {
			this->data[i] = other.data[i];
		}
	}
	return *this;
}
String::String(size_t _capacity)
{
	this->size = 0;
	this->capacity = _capacity;
	this->data = new char[_capacity];
}

String::String(const char* data)
{
    this->size = strlen (data) ;
	this->capacity = this->size * 2;
	this->data = new char[this->capacity];
	for (size_t i = 0; i < size; ++i)
	{
		this->data[i] = data[i];
	}
}
String::~String()
{
	delete[] this->data;
	this->size = 0;
	this->capacity = 0;
}


const char& String::operator[](size_t index) const
{
	return this->data[index];
}

char& String::operator[](size_t index)
{
	return this->data[index];
}

int String::getSize()const
{
  return size;
}
int String::getCapacity()const
{
  return capacity;
}

bool String::operator==(const String & other)const
{
	std::cout<<this->data<<"/"<<other.data<<"?"<<std::endl;
	if (this->size != other.size) {
        return false;
    }
	else
	{
		std::cout<<this->data<<"/"<<other.data<<"?";
		return strcmp(this->data,other.data)==0;

	}
	
}

bool String::operator<(const String & other)
{
	return strcmp(this->data,other.data) < 0;
}

bool String::operator>(const String & other)
{
	return strcmp(this->data,other.data) > 0;
}

std::istream& operator>>(std::istream& input,  String& other)
{
    
    input.getline(other.data, other.capacity);
	other.size = std::strlen(other.data) ;

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
