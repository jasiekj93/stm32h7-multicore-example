#include "Task.hpp"
#include <libh7/hardware/cm4/SevHandler.hpp>
#include <libh7/hardware/cm4/System.hpp>

using namespace h7::application::cm4;

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

     
}
