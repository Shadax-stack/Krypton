#include "Vector.h"

namespace Krypton {

	Vector2f::Vector2f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

	Vector3f::Vector3f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

	Vector4f::Vector4f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

}