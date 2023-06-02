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
    auto handler = hardware::cm4::SevHandler::getInstance();
    auto system = hardware::cm4::System::getInstance();

    while (true)
    {
        auto request = handler->getRequest();
        processRequest(request);
        system->delay(1);
    }
}

void Task::processRequest(hardware::cm4::Request* request)
{
    if(request == nullptr)
        return;

    auto led = hardware::cm4::Led::getInstance();
    auto color = (hardware::cm4::Led::Color)request->color;

    if(request->action == true)     
        led->turnOn(color);        
    else
        led->turnOff(color);        
}