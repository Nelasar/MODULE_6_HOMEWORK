#pragma once
#include "IElectronics.h"

namespace ElectronicsShop {
	class OfficeTech : public IElectronics
	{
	public:
		OfficeTech(std::string, std::string, std::string);
		void ShowSpec() override;
	protected:
		std::string _color;
		std::string _brand;
		std::string _model;
	};
}



