/**
 * @file Main.cpp
 * @author Adrian Szczepanski
 * @date 2023-05-29
 */

#include <libh7/driver/cm7/Init.hpp>
#include <libh7/driver/cm7/LedImpl.hpp>
#include <libh7/driver/cm7/SystemImpl.hpp>
#include <libh7/application/cm7/Task.hpp>

using namespace h7;

int main(int argc, char* argv[])
{
    driver::cm7::init();
    auto led = driver::cm7::LedImpl();
    auto system = driver::cm7::SystemImpl();

    application::cm7::Task().execute();

    while (1) ;
	return 0;
}