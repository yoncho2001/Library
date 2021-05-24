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
	Vector(const Vector&);
	Vector& operator=(const Vector<T>&);
	~Vector();
	
	const T& operator[](size_t) const;
	T& operator[](size_t);
	size_t getSize() const;
	void pushBack(const T& x);
	void popByData(const size_t& x);
	bool isEmpty () const;
	void print() const;
	

};
#include "Vector.cpp"