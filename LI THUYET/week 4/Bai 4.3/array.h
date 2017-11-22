#pragma once
#include <iostream>
#include <string>

using namespace std;


template <class T>
bool IsAscending(T x, T y) 
{
	return x <= y;
};

template <class T>
bool IsDecending(T x, T y)
{
	return x >= y;
};

template <class T>
class Array 
{
	int size;
	T *a;
public:
	Array() 
	{
		size = 0;
		a = NULL;
	}
	Array(int size)
	{
		if (size > 0) 
		{
			this->size = size;
			a = new T[size];
			for (int i = 0; i < size; i++)
				a[i] = 0;
		}
	}
	Array(T *b, int n) 
	{
		size = n;
		a = new T[size];
		for (int i = 0; i < size; i++) 
		{
			a[i] = b[i];
		}
	}
	Array(const Array& x) 
	{
		size = x.size;
		a = new T[size];
		for (int i = 0; i < size; i++) 
		{
			a[i] = x.a[i];
		}
	}
	~Array() {
		size = NULL;
		delete[]a;
	}

	void Nhap();
	void Xuat();

	void Sapxep(bool(*IsCorrect) (T, T));

	T operator[](int i)
	{
		return a[i];
	}
	Array<T>& operator=(const Array& a);
};


template <class T>
void Array<T>::Nhap() 
{
	cout << "Nhap size: ";
	cin >> size;
	a = new T[size];
	for (int i = 0; i < size; i++) 
	{
		cout << "a[" << i + 1 << "]: ";
		cin >> a[i];

	}
};
template <class T>
void Array<T>::Xuat() 
{
	for (int i = 0; i < size; i++) 
	{
		cout << a[i] << "   ";
	}
	cout << endl;
};

template <class T>
void Array<T>::Sapxep(bool(*IsCorrect) (T, T))
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++) 
		{
			if (!IsCorrect(a[i], a[j]))
				swap(a[i], a[j]);
		}
	}
};

template <class T>
Array<T>& Array<T>::operator=(const Array& x) 
{
	if (this != &x) {
		this->size = x.size;
		delete[]a;
		a = new T[size];
		for (int i = 0; i < size; i++)
			a[i] = x.a[i];
	}
	return *this;
};