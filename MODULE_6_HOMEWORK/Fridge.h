#pragma once
#include "Appliances.h"

namespace ElectronicsShop{
	class Fridge final:  public Appliances
	{
	public:
		Fridge(int, std::string, int, bool, int, int, int);
		void ShowSpec() override;
	protected:
		int _energyConsumption;
		bool _doesHaveFreezer;
		int _volume;
		int _freezeVolume;
		int _noiseLevel;
	};
}