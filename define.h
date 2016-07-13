
#ifndef __DEFINE_H
#define __DEFINE_H

#ifdef _WIN32

#undef EINPROGRESS
#define EINPROGRESS WSAEINPROGRESS

#undef snprintf
#define snprintf sprintf_s

#define strcasecmp strcmp
#define strncasecmp _strnicmp
#define strerror_r(errorno, buf, len) strerror_s(buf, len, errorno)

#endif // _WIN32

#endif // __DEFINE_H
