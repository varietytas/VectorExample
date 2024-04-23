#include "vector.h"

namespace CustomVector
{
    template<typename T>
    vector<T>::vector()
    {
        _array = new T[initSize];
        _size = initSize;
        _end = _array;
    }

    template<typename T>
    vector<T>::~vector()
    {
        delete[] _array;
    }

    template<typename T>
    size_t vector<T>::size()
    {
        return _end - _array;
    }

    template<typename T>
    T& vector<T>::operator[](size_t i)
    {
        return _array[i];
    }

    // To finish;
    template<typename T>
    void vector<T>::push_back(T elem)
    {
        if (_end - _array + 1 < _size)
        {
            *_end = elem;
            _end++;
        }
        else
        {
            _size *= 2;
            T* temp = new T[_size];
            for (int i = 0; i < size(); i++)
               temp[i] = _array[i];

            _end = &temp[size()];
            delete[] _array;
            _array = temp;
            
            push_back(elem);
        }
    }
};