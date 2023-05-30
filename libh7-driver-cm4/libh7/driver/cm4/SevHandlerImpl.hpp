#pragma once

/**
 * @file SevHandlerImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

#include <libh7/hardware/cm4/SevHandler.hpp>

namespace h7::driver::cm4
{
	class SevHandlerImpl : public hardware::cm4::SevHandler
	{
	public:
		SevHandlerImpl();

        hardware::cm4::Request* getRequest() override;
	};
}
