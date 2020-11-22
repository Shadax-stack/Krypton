#ifndef  KRYPTON_VECTOR_H
#define KRYPTON_VECTOR_H

#include "Krypton.h"
#include <xmmintrin.h> // for SSE2
#include <nmmintrin.h>  // for SSE4.2
#include <immintrin.h>  // for AVX

namespace Krypton {

	typedef __m128 SIMD_128;

	struct alignas(sizeof(SIMD_128)) KRYPTON_API Vector2f {
	public:
		union { 
			SIMD_128 SSE_Register;
			struct {
				float r;
				float g;
			};
			struct {
				float x;
				float y;
			};
			float data[2];
		};
		Vector2f(void);
		Vector2f(float x, float y);
	};

	struct alignas(sizeof(SIMD_128)) KRYPTON_API Vector3f {
	public:
		union {
			SIMD_128 SSE_Register;
			struct {
				float r;
				float g;
				float b;
			};
			struct {
				float x;
				float y;
				float z;
			};
			float data[3];
		};
		Vector3f(void);
		Vector3f(float x, float y, float z);
	};

	struct alignas(sizeof(SIMD_128)) KRYPTON_API Vector4f {
	public:
		union {
			SIMD_128 SSE_Register;
			struct {
				float r;
				float g;
				float b;
				float a;
			};
			struct {
				float x;
				float y;
				float z;
				float w;
			};
			float data[4];
		};
		Vector4f(void);
		Vector4f(float x, float y, float z, float w);
	};

}

#endif // ! KRYPTON_VECTOR_H
