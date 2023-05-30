#pragma once

#include <libh7/hardware/cm4/SevHandler.hpp>

/**
 * @file Task.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

namespace h7::application::cm4
{
	class Task
	{
	public:
		Task();

        void execute();

    protected:
        void processRequest(hardware::cm4::Request*);
	};
}
