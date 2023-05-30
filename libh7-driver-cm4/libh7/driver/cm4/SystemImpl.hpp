#pragma once

/**
 * @file SystemImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

#include <libh7/hardware/cm4/System.hpp>

namespace h7::driver::cm4
{
	class SystemImpl : public hardware::cm4::System
	{
	public:
		SystemImpl();

        void delay(unsigned ms) override;

	};
}
