/**
 * @file Main.cpp
 * @author Adrian Szczepanski
 * @date 2023-05-29
 */

#include <libh7/driver/cm4/Init.hpp>

using namespace h7;

int main(int argc, char* argv[])
{
    driver::cm4::init();

    while (1) ;
	return 0;
}