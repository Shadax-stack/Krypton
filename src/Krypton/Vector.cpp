#include "Vector.h"

namespace Krypton {

	Vector2f::Vector2f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {
	
	}

}