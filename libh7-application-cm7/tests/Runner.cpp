/**
 * @file Runner.cpp
 * @author Adrian Szczepanski
 * @date 2023-05-29
 */

#include <CppUTest/CommandLineTestRunner.h>

int main(int argc, char* argv[])
{
    return CommandLineTestRunner::RunAllTests(argc, argv);
}
