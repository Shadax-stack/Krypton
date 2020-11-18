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
				float b;
			};
			struct {
				float x;
				float y;
			};
			float data[2];
		};
		Vector2f(void);
	};

}

#endif // ! KRYPTON_VECTOR_H
