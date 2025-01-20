#ifndef IS_ODD_H
#define IS_ODD_H

#include <stdint.h>

uint32_t __ODD_ARRAY[134217728] = {
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
	, 
	#include "array_part.h"
};

#define IS_ODD(N) (1 & ( __ODD_ARRAY[(N)>>5]>>((N)&0x1F) ))

#endif // IS_ODD_H
