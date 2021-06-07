#pragma once
#include "String.h"

String::String()
{
	this->data = new char[100];
	this->size = 0;
	this->capacity = 100;
}
String::String(const String &other)
{
	this->size = other.size;
	this->capacity = other.capacity;
	this->data = new char[capacity];
	for (size_t i = 0; i < size; ++i)
	{
		this->data[i] = other.data[i];
	}
	this->data[size] = '\0';
}
String &String::operator=(const String &other)
{
	if (this != &other)
	{
		delete[] this->data;
		this->size = other.size;
		this->capacity = other.capacity;
		this->data = new char[capacity];
		for (size_t i = 0; i < size; ++i)
		{
			this->data[i] = other.data[i];
		}
		this->data[size] = '\0';
	}
	return *this;
}
String::String(size_t _capacity)
{
	this->size = 0;
	this->capacity = _capacity;
	this->data = new char[_capacity];
}

String::String(const char *data)
{
	this->size = strlen(data);
	this->capacity = this->size * 2;
	this->data = new char[this->capacity];
	for (size_t i = 0; i < this->size; ++i)
	{
		this->data[i] = data[i];
	}
	this->data[size] = '\0';
}
String::~String()
{
	delete[] this->data;
	this->size = 0;
	this->capacity = 0;
}

const char &String::operator[](size_t index) const
{
	return this->data[index];
}

char &String::operator[](size_t index)
{
	return this->data[index];
}

int String::getSize() const
{
	return size;
}
int String::getCapacity() const
{
	return capacity;
}
char* String::getData()const
{
	return this->data;
}

bool String::operator==(const String &other) const
{

	return strcmp(this->data, other.data) == 0;
}

bool String::operator!=(const String &other) const
{

	return strcmp(this->data, other.data) != 0;
}

bool String::operator<(const String &other)
{
	return strcmp(this->data, other.data) < 0;
}

bool String::operator>(const String &other)
{
	return strcmp(this->data, other.data) > 0;
}
