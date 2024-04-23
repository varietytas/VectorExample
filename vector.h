#ifndef VECTOR_H
#define VECTOR_H

namespace CustomVector
{
    const size_t initSize = 10;

    template<typename T>
    class vector
    {
        T* _array;
        T* _end;
        size_t _size;
        
    public:
        vector();
        size_t size();
        T& operator[](size_t);
        void push_back(T);
        ~vector();
    };
};
#endif
