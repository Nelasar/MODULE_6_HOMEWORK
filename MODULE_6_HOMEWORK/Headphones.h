#pragma once
#include "audioEquipment.h"

namespace ElectronicsShop {
	class Headphones final : public AudioEquipment
	{
	public:
		Headphones(bool, int, int, std::string, std::string, std::string);
		void ShowSpec() override;
	protected:
		int _wireLength;
		bool _isWireless; // ‘лаг, €вл€ютс€ ли наушники беспроводными
	};
}

