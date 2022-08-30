#pragma once
#include "OfficeTech.h"

namespace ElectronicsShop {
	class OfficePrinter final : public OfficeTech
	{
	public:
		OfficePrinter(std::string, std::string, std::string, std::string, std::string, std::string);
		void ShowSpec() override;
	protected:
		std::string _printType;
		std::string _printColor;
		std::string _maxPrintFormat;
	};
}