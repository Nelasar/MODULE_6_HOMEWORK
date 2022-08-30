#pragma once
#include "IElectronics.h"

namespace ElectronicsShop {
	class Appliances : public IElectronics
	{
	public:
		Appliances(int, std::string);
		virtual void ShowSpec() override;
		int getWeigth();
	protected:
		int _weight;
		std::string _model;
	};
}