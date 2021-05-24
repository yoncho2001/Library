#pragma once
#include <iostream>
template <class T>
class Vector
{
private:
	T* data;
	size_t size;
	size_t capacity;

	void copy(const Vector<T>&);
	void del();
	void resize();
public:
	
	Vector();
	Vector(const Vector<T>& other);
	Vector& operator=(const Vector<T>& other);
	~Vector();
	
	const T& operator[](size_t x) const;
	T& operator[](size_t x);
	size_t getSize() const;
	bool isEmpty () const;
	void pushBack(const T& x);
	void popByIndex(const size_t& x);
  
	void print() const;
	

};
#include "Vector.cpp"