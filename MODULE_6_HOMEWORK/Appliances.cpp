#include "Appliances.h"

namespace ElectronicsShop {
	Appliances::Appliances(int weight, std::string model) : _weight(weight), _model(model) {}
	void Appliances::ShowSpec() {
		std::cout << "Model: " << _model << std::endl;
		std::cout << "Weight: " << _weight << " kg" << std::endl;
	}
	int Appliances::getWeigth() {
		return _weight;
	}
}