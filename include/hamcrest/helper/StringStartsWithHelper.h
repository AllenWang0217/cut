#ifndef H22AE9E32_9055_406A_BF9F_7420F3A227EA
#define H22AE9E32_9055_406A_BF9F_7420F3A227EA

#include <hamcrest/core/StringStartsWith.h>

HAMCREST_NS_BEGIN

#define starts_with(prefix) HAMCREST_NS::StringStartsWith(false, prefix)
#define starts_with_ignoring_case(prefix) HAMCREST_NS::StringStartsWith(true, prefix)

HAMCREST_NS_END

#endif
