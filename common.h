#pragma once

typedef unsigned char byte;
typedef long long i64;
typedef unsigned long long u64;

#ifdef __GNUC__
void log(const char *fmt, ...) __attribute__ ((format(printf, 1, 2)));
#else
void log(const char *fmt, ...);
#endif