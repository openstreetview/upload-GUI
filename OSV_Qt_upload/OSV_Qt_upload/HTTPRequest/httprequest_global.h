#ifndef HTTPREQUEST_GLOBAL_H
#define HTTPREQUEST_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(HTTPREQUEST_LIBRARY)
#  define HTTPREQUESTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define HTTPREQUESTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // HTTPREQUEST_GLOBAL_H
