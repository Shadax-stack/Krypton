#ifndef  KRYPTON_VECTOR_H
#define KRYPTON_VECTOR_H

#include "Krypton.h"
#include <xmmintrin.h> // for SSE2
#include <nmmintrin.h>  // for SSE4.2
#include <immintrin.h>  // for AVX

namespace Krypton {

	typedef __m128 SIMD_128;

	struct KRYPTON_API Vector2f {
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
	};

	struct KRYPTON_API Vector3f {
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
	};

	struct KRYPTON_API Vector4f {
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
	};

}

#endif // ! KRYPTON_VECTOR_H
