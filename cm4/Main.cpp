/**
 * @file Main.cpp
 * @author Adrian Szczepanski
 * @date 2023-05-29
 */

#include <libh7/driver/cm4/Init.hpp>
#include <libh7/driver/cm4/LedImpl.hpp>
#include <libh7/driver/cm4/SystemImpl.hpp>
#include <libh7/driver/cm4/SevHandlerImpl.hpp>
#include <libh7/application/cm4/Task.hpp>

using namespace h7;

int main(int argc, char* argv[])
{
    driver::cm4::init();

    driver::cm4::LedImpl led;
    driver::cm4::SystemImpl system;
    driver::cm4::SevHandlerImpl sevHandler;

    application::cm4::Task().execute();

    while (1) ;
	return 0;
}