#include "String.cpp"

template<typename T>
void Vector<T>::copy(const Vector<T>& other)
{
	
	this->size = other.size;
    this->capacity = other.capacity;
	this->data = new T[capacity];
    this->capacity = other.capacity;
	for (size_t i = 0; i < size; i++)
	{
		this->data[i] = other.data[i];
		
	}
}
template<typename T>
void Vector<T>::del()
{
	delete[] this->data;
	this->size = 0;
    this->capacity = 0;
}
template<class T>
void Vector<T>::resize()
 {
	T* newData = new T[this->capacity * 2];
	this->capacity *= 2;

	for (size_t i = 0; i < this->size; ++i)
	{
		newData[i] = this->data[i];
	}
	this->del();
	this->data = newData;
}
template<class T>
inline Vector<T>::Vector()
{
	
	this->size = 0;
	this->capacity = 8;
	this->data = new T[capacity];
}
template<typename T>
Vector<T>::Vector(const Vector<T>& other)
{
	Vector<T>::copy(other);
}
template<typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
	if (this != &other)
	{
		Vector<T>::del();
		Vector<T>::copy(other);
	}
	return *this;
}
template<typename T>
Vector<T>::~Vector()
{
	Vector<T>::del();
}

template<typename T>
const T& Vector<T>::operator[](size_t index) const
{
	return this->data[index];
}

template<typename T>
T& Vector<T>::operator[](size_t index)
{
	return this->data[index];
}
template<class T>
size_t Vector<T>::getSize() const
{
	return this->size;
}
template<class T>
void Vector<T>::pushBack(const T& x)
{
	this->size++;
	if (this->size >= this->capacity)
	{
		this->resize();
	}
	this->data[this->size - 1] = x;
}
template<typename T>
void Vector<T>::popByIndex(const size_t& index)
{
	if ((this->size - 1) == 0)
	{
		--this->size;
		T* temp = new T[this->capacity];
		delete[] data;
   		this->data = temp;
	}
	else
	{
    
    	T* temp = new T[this->capacity];
    	for (size_t i = 0; i < index; ++i)
    	{
    	    temp[i] = this->data[i];
   	 	}
   		for (size_t i = index + 1; i < size; ++i)
    	{
       		 temp[i - 1] = this->data[i];
    	}
    	--this->size;
   		delete[] data;
    	this->data = temp;
	}
}

template <class T>
bool Vector<T>::isEmpty() const {
    return (this->size == 0);
}
template<typename T>
void Vector<T>::print() const
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << data[i];
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
