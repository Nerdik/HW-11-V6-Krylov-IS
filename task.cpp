// Variant 6

#include <vector>
#include <iostream>
#include <algorithm>


void printElem(int elem)
{
    std::cout << elem << " ";
}

// Exercise 1 function 
// Заменить все простые числа на х.

bool ex1IsPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


void ex1(std::vector<int> v)
{
    int x;
    std::cout << "Input x: ";
    std::cin >> x;

    std::replace_if(v.begin(), v.end(), ex1IsPrime, x);

    std::for_each(v.begin(), v.end(), printElem);
}


// Exercise 2 function
// Удалить из массива каждый k-й по счету элемент.
// bool ex2RemoveEl()
// {
//     if 
// }



// void ex2(std::vector<int> v)
// {
//     int k;
//     std::cout << "Input k: ";
//     std::cin >> k;

//     std::vector<int>::iterator iter = v.begin();
//     // std::remove_if(v.begin(), v.end(), iter == k);

//     std::for_each(v.begin(), v.end(), printElem);
// }


int main()
{
    std::vector<int> v ={ 1, 4, 5, 2, 8, 7, 0 };
    

    // Exercise 1
    ex1(v);

    // Exercise 2
    // ex2(v);

    return 0;
}