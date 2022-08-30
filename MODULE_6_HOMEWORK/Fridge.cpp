#include "Fridge.h"

namespace ElectronicsShop {
	Fridge::Fridge(int weight, std::string model, int energyConsumption, bool doesHaveFreezer, int volume, int freezeVolume,int noiseLevel) :
		Appliances(weight,model), _energyConsumption(energyConsumption), _doesHaveFreezer(doesHaveFreezer), _volume(volume), _noiseLevel(noiseLevel) 
	{
		if (_doesHaveFreezer) {
			_freezeVolume = freezeVolume;
		}
		else {
			_freezeVolume = 0;
		}
	}

	void Fridge::ShowSpec() {
		Appliances::ShowSpec();
		std::cout << "Energy Consumption: " << _energyConsumption << " kWatts/hour" << std::endl;
		std::cout << "Volume: " << _volume << " liters" << std::endl;
		if (_doesHaveFreezer) {
			std::cout << "Does have Freezer: Yes\nFreezer Volume: " << _freezeVolume << " liters" << std::endl;
		}
		else {
			std::cout << "Does have Freezer: No\nFreezer Volume: N\\A" << std::endl;
		}
		std::cout << "Noise level: " << _noiseLevel << " decibels" << std::endl;
	}
}