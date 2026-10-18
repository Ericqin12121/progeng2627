#include <iostream>
int calculatesquare(int x)
    {
        return x*x;
    }
int main()
{
    int result = calculatesquare(5);

    std::cout << result;

    return 0;
}