// Variant 6

#include <vector>
#include <iostream>
#include <algorithm>


void printElem(int elem)
{
    std::cout << elem << " ";
}

// Exercise 1 function 
void ex1(std::vector<int>& v)
{
    int x;
    std::cout << "Input x: ";
    std::cin >> x;

    std::replace_if(v.begin(), v.end(), [](int n)
    {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i += 2)
        {
            if (n % i == 0) return false;
        }
        return true;
    },
    x);

    std::for_each(v.begin(), v.end(), printElem);
}


// Exercise 2 function
void ex2(std::vector<int>& v)
{
    int k;
    std::cout << "Input k: ";
    std::cin >> k;

    int count = 0;
    auto new_end = std::remove_if(v.begin(), v.end(), 
    [k, &count](int i) {count++;  return count % k == 0; });

    v.erase(new_end, v.end());

    std::for_each(v.begin(), v.end(), printElem);
}


int main()
{
    std::vector<int> v ={ 1, 4, 5, 2, 8, 7, 0 };
    

    // Exercise 1
    ex1(v);

    // Exercise 2
    ex2(v);

    return 0;
}