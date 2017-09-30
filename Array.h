//
// Created by user-pc on 19/09/2017.
//

#ifndef UNTITLED3_ARRAY_H
#define UNTITLED3_ARRAY_H
const int  N =  10;
const int INDEX_OUT_OF_BOUND = 99;

template <class T>
class Array {
public:
    Array(){lastindex = 0;};
    ~Array(){lastindex =0;};
    T& operator[](int index);
    T* operator++();
    T* operator--();
    T* operator+(int i);
    T* operator-(int i);
    T operator*();

private:
    T arr[N];
    int lastindex;
    bool isLegal(int index){ return ((index+lastindex<N)&&(index+lastindex >=0));};
};


template <class T>
T& Array<T>::operator[](int index)
{
    if(!isLegal(index))
    {
        throw (INDEX_OUT_OF_BOUND);
    }

    return arr[index+lastindex];
}

template <class T>
T* Array<T>::operator++()
{
    if(!isLegal(1))
    {
        throw (INDEX_OUT_OF_BOUND);
    }
    lastindex++;
    return &arr[lastindex];
}

template <class T>
T* Array<T>::operator--()
{
    if(!isLegal(-1))
    {
        throw (INDEX_OUT_OF_BOUND);
    }
    lastindex--;
    return &arr[lastindex];
}

template <class T>
T* Array<T>::operator+(int i)
{
    if(!isLegal(i))
    {
        throw (INDEX_OUT_OF_BOUND);
    }

    return &arr[lastindex+i];
}
template <class T>
T* Array<T>::operator-(int i)
{
    return operator+(-i);
}

template <class T>
T Array<T>::operator*()
{
    return arr[lastindex];
}



#endif //UNTITLED3_ARRAY_H
