#ifndef _radixmap.h
#include <stdint.h>

typedef union RMElement{
	uint64_t raw;
	struct {
		uint32_t key;
		uint32_t value;
	} data;
}RMElement;

typedef struct RadixMap{
	size_t max;
	size_t end;
	uint32_t counter;
	RMElement *contents;
	RMElement *temp;
}RadixMap;


#endif
