#include "OfficePrinter.h"

namespace ElectronicsShop {
	OfficePrinter::OfficePrinter(std::string brand, std::string model, std::string color, std::string printType, std::string printColor, std::string maxPrintFormat) :
									OfficeTech(brand, model, color), _printType(printType), _printColor(printColor), _maxPrintFormat(maxPrintFormat){ }
	void OfficePrinter::ShowSpec() {
		OfficeTech::ShowSpec();
		std::cout << "Print Type: " << _printType << std::endl;
		std::cout << "Print Color: " << _printColor << std::endl;
		std::cout << "Max Print Format: " << _maxPrintFormat << std::endl;
	}
}