/*
* Based on Andre Reinald and Learn C the Hard Way. Modified to fit stable
* and unstable conditions. Done by: Asuncion Martinez
*/
#include <stdio.h>
#include <stdlib.h>
#include <radixmap.h>

RadixMap *RadixMap_create(size_t max){
	RadixMap *map = calloc(sizeof(RadixMap), 1);
	check_mem(map);

	map->contents = calloc(sizeof(RMElement), max + 1);
	check_mem(map->contents);

	map->temp = calloc(sizeof(RMElement), max + 1);
	check_mem(map->temp);

	map->max = max;
	map->end = 0;

	return map;
error:
	return NULL;
}
