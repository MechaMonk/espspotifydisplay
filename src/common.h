#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

#include "typedefs.h"

#define NELEMENTS(array) (sizeof (array) / sizeof ((array) [0]))

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))


#define spiFlashRead(dst, addr, length) do{ spi_flash_read((uint)addr, dst, length); }while(0)
uint spiFlashReadDword(const uint *addr);

int roundUp(int numToRound, int multiple);
    
    
#endif /* INCLUDE_COMMON_H_ */
