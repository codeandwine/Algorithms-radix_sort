#include <time.h>
//#include <radixmap.h>  // this will be done later

static int make_random(RadixMap * map){
	size_t i = 0;
	
	for(i = 0; i < map->max - 1; i++){
		uint32_t key = (uint32_t)(rand() | rand() << 16);
		check(RadixMap) // a check will be performed
	}
	return i;
error: 
	return 0;
}

