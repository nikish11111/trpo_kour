#define CTEST_MAIN
#include <ctest.h>

#include <get_input.h>
#include <random_fill.h>

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

CTEST(random_fill, correct)
{
    int arr[4];
    random_fill(arr);
    int result = 0;
    for (int i = 0; i < 4; i++) {
        if (arr[i] < 0 || arr[i] > 9) {
            result = 1;
            break;
        }
    }
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_repeats, no_repeats1)
{
    char input[] = {'1', '2', '3', '4'};
    int result = check_repeats(input);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_repeats, no_repeats2)
{
    char input[] = {'1', '9', '8', '0'};
    int result = check_repeats(input);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_repeats, one_repeat)
{
    char input[] = {'1', '9', '3', '1'};
    int result = check_repeats(input);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(check_repeats, full_repeat)
{
    char input[] = {'5', '5', '5', '5'};
    int result = check_repeats(input);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(string_to_int, correct)
{
    char str[] = {'1', '2', '3', '4'};
    int arr[4];
    string_to_int(str, arr);
    int result = arr[0] == 1 && arr[1] == 2 && arr[2] == 3 && arr[3] == 4;
    int expected = 1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char **argv)
{
    return ctest_main(argc, argv);
}