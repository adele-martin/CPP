#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template <typename T>
void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(T& a, T& b)
{
    if (a < b)
        return (a);
    else if (a > b)
        return (b);
    else
        return (b);
}

template <typename T>
T max(T& a, T& b)
{
    if (a > b)
        return (a);
    else if (a < b)
        return (b);
    else
        return (b);
}

#endif