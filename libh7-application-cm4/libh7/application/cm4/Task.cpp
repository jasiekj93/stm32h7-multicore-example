#include "Task.hpp"
#include <libh7/hardware/cm4/SevHandler.hpp>
#include <libh7/hardware/cm4/System.hpp>
#include <libh7/hardware/cm4/Led.hpp>

using namespace h7::application::cm4;

static void toggleGreen();

Task::Task()
{
}

void Task::execute()
{
    auto system = hardware::cm4::System::getInstance();

    while (true)
    {
        // toggleGreen();
        // system->delay(500);
        system->sleep();
    }
}

static void toggleGreen()
{
    static bool status = true;
    auto led = h7::hardware::cm4::Led::getInstance();

    if(status)
        led->turnOn(h7::hardware::cm4::Led::Color::GREEN);
    else
        led->turnOff(h7::hardware::cm4::Led::Color::GREEN);
        
    status = !status;
}