#include "../bot.h"
#include <iostream>

using namespace std;

// https://stackoverflow.com/questions/52273110/how-do-i-write-a-unit-test-in-c
#define IS_TRUE(x)                                                                    \
    {                                                                                 \
        if (!(x))                                                                     \
            std::cout << __FUNCTION__ << " failed on line " << __LINE__ << std::endl; \
    }

using namespace UTTT;

void test_tinyboard()
{
    TinyBoard *newBoard = new TinyBoard();

    IS_TRUE(newBoard);
}

int main()
{
    test_tinyboard();

    return 0;
}