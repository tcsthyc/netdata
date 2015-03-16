#include <inttypes.h>

#ifndef NETDATA_STORAGE_NUMBER_H
#define NETDATA_STORAGE_NUMBER_H

typedef long double calculated_number;
#define CALCULATED_NUMBER_FORMAT "%0.7Lf"
//typedef long long calculated_number;
//#define CALCULATED_NUMBER_FORMAT "%lld"

typedef long long collected_number;
#define COLLECTED_NUMBER_FORMAT "%lld"

typedef int32_t storage_number;
typedef uint32_t ustorage_number;
#define STORAGE_NUMBER_FORMAT "%d"

storage_number pack_storage_number(calculated_number value);
calculated_number unpack_storage_number(storage_number value);

#endif /* NETDATA_STORAGE_NUMBER_H */