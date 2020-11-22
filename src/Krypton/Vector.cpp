#include "Vector.h"

namespace Krypton {

	Vector2f::Vector2f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

	Vector2f::Vector2f(float x, float y) : SSE_Register(_mm_set_ps(x, y, 0.0f, 0.0f)) {}

	Vector3f::Vector3f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

	Vector3f::Vector3f(float x, float y, float z) : SSE_Register(_mm_set_ps(x, y, z, 0.0f)) {}

	Vector4f::Vector4f(void) : SSE_Register(_mm_set_ps(0.0f, 0.0f, 0.0f, 0.0f)) {}

	Vector4f::Vector4f(float x, float y, float z, float w) : SSE_Register(_mm_set_ps(x, y, z, w)) {}


}