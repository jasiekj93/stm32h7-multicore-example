#pragma once

/**
 * @file SevHandler.hpp
 * @author Adrian Szczepanski
 * @date 2023-05-30
 */

namespace h7::hardware::cm4
{
    struct Request
    {
        enum class Color
        {
            RED,
            GREEN,
            YELLOW
        };

        Color color;
        bool action;
    };

	class SevHandler
	{
	public:
		virtual ~SevHandler() {}

		static SevHandler* getInstance();

        virtual Request* getRequest() = 0;

	protected:
		static SevHandler* instance;
	};
}
