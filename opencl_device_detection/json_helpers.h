#pragma once

#include "OpenCLDevice.h"

namespace json_helpers {
	std::string GetPlatformDevicesJsonString(std::vector<JsonLog> &platforms, std::string statusStr, std::string errorStr, bool prettyPrint = false);
}
