#include "OfficeTech.h"

namespace ElectronicsShop {
	OfficeTech::OfficeTech(std::string brand, std::string color, std::string model) : _brand(brand), _color(color), _model(model) {}
	void OfficeTech::ShowSpec() {
		std::cout << "Brand: " << _brand << std::endl;
		std::cout << "Model: " << _model << std::endl;
		std::cout << "Color: " << _color << std::endl;
	}
}