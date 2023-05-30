#pragma once

/**
 * @file LedImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

#include <libh7/hardware/cm4/Led.hpp>

namespace h7::driver::cm4
{
	class LedImpl : public hardware::cm4::Led
	{
	public:
		LedImpl();

        void turnOn(Color) override;
        void turnOff(Color) override;

	};
}
