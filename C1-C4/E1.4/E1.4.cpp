
#include <iostream>

int main()
{
    long total = 0;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp = 2 * i + 1;
        total = total + temp;
    }
    std::cout << "The total number is: " << total << std::endl;
}

