#ifndef ARRAY_HPP
# define ARRAY_HPP

template <class T>
class Array
{
    private:
    T *array;
    unsigned int arrSize;

    public:
    Array() : array(nullptr), arrSize(0){}
    Array(unsigned int n) : arrSize(n)
    {
        array = new T[n]();
    }
    T &operator[](unsigned int i)
    {
        if (i > arrSize)
            throw std::out_of_range("Error. Index out of bounds!");
        return array[i];
    }
    Array(Array const &oth) : array(nullptr), arrSize(oth.arrSize)
    {
        if (arrSize > 0)
        {
            array = new T[arrSize];
            for (unsigned int i = 0; i < arrSize; ++i)
                array[i] = oth.array[i];
        }
    }
    Array &operator=(Array const &oth)
    {
        if (this != &oth)
        {
            delete[] array;
            arrSize = oth.arrSize;
            if (arrSize > 0)
            {
            array = new T[arrSize];
            for (unsigned int i = 0; i < arrSize; ++i)
                array[i] = oth.array[i];
            }
        }
        return (*this);
    }
    ~Array()
    {
        delete[] array;
    }
    unsigned int getSize()
    {
        return this->arrSize;
    }
    unsigned int size()
    {
        return getSize();
    }
};

class myException: public std::exception
{
    public:
    virtual const char* what() const throw()
    {
        return "Error. Array is out of bounds";
    }
};

#endif