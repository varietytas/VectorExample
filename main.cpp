#include "vector.h"
#include <iostream>

int main()
{
    // Put implementation to vector.h to make it work.

    CustomVector::vector<int> test;
    for (int i = 0; i < 13; i++)
        test.push_back(i);

    for (int i = 0; i < test.size(); i++)
        std::cout << test[i] << ' ';
}
