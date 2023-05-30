#include "Task.hpp"
#include <libh7/hardware/Led.hpp>
#include <libh7/hardware/System.hpp>

using namespace h7;
using namespace h7::application::cm7;

Task::Task()
{

}

void Task::execute()
{
    static constexpr auto DELAY_TIME = 500U;

    auto led = hardware::Led::getInstance();
    auto system = hardware::System::getInstance();

    while (true)
    {
        led->turnOn(hardware::Led::Color::RED);
        system->delay(DELAY_TIME);

        led->turnOn(hardware::Led::Color::GREEN);
        system->delay(DELAY_TIME);

        led->turnOn(hardware::Led::Color::YELLOW);
        system->delay(DELAY_TIME);

        led->turnOff(hardware::Led::Color::RED);
        system->delay(DELAY_TIME);

        led->turnOff(hardware::Led::Color::GREEN);
        system->delay(DELAY_TIME);

        led->turnOff(hardware::Led::Color::YELLOW);
        system->delay(DELAY_TIME);
    }
}
