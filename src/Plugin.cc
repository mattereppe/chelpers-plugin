
#include "Plugin.h"

namespace plugin { namespace CNR_utils { Plugin plugin; } }

using namespace plugin::CNR_utils;

zeek::plugin::Configuration Plugin::Configure()
	{
	zeek::plugin::Configuration config;
	config.name = "CNR::utils";
	config.description = "<Insert description>";
	config.version.major = 0;
	config.version.minor = 1;
	config.version.patch = 0;
	return config;
	}
