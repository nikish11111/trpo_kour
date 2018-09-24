#define CTEST_MAIN
#include <ctest.h>

#include <get_input.h>

CTEST(check_input, correct1)
{
    char input[] = {'1', '2', '3', '4', '\0'};
    int result = check_input(input);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input, correct2)
{
    char input[] = {'0', '5', '9', '9', '\0'};
    int result = check_input(input);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input, incorrect1)
{
    char input[] = {'a', 'f', '!', '9', '\n', 'f'};
    int result = check_input(input);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_input, incorrect2)
{
    char input[] = {1, 2, 3, 4, '\n'};
    int result = check_input(input);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char **argv)
{
    return ctest_main(argc, argv);
}