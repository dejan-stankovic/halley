#pragma once

#include "../core/include/halley_core.h"
#include "../core/include/halley_main.h"
#include "../entity/include/halley_entity.h"
#include "../utils/include/halley_utils.h"

#ifdef _MSC_VER
	#ifndef _DEBUG
		#pragma comment(lib, "halley_utils.lib")
		#pragma comment(lib, "halley_entity.lib")
		#pragma comment(lib, "halley_core.lib")
		#pragma comment(lib, "halley_opengl.lib")
	#else
		#pragma comment(lib, "halley_utils_d.lib")
		#pragma comment(lib, "halley_entity_d.lib")
		#pragma comment(lib, "halley_core_d.lib")
		#pragma comment(lib, "halley_opengl_d.lib")
	#endif
#endif
