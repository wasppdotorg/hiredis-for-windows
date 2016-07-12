
#ifndef DEFINE_H
#define DEFINE_H

#define EINPROGRESS WSAEINPROGRESS

#define snprintf sprintf_s
#define strcasecmp strcmp
#define strncasecmp _strnicmp
#define strerror_r(errorno, buf, len) strerror_s(buf, len, errorno)

#endif // DEFINE_H