#ifndef diplomat_result_box_ICU4XGregorianDateTime_ICU4XError_H
#define diplomat_result_box_ICU4XGregorianDateTime_ICU4XError_H
#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "diplomat_runtime.h"

typedef struct ICU4XGregorianDateTime ICU4XGregorianDateTime;
#include "ICU4XError.h"
#ifdef __cplusplus
namespace capi {
extern "C" {
#endif
typedef struct diplomat_result_box_ICU4XGregorianDateTime_ICU4XError {
    union {
        ICU4XGregorianDateTime* ok;
        ICU4XError err;
    };
    bool is_ok;
} diplomat_result_box_ICU4XGregorianDateTime_ICU4XError;
#ifdef __cplusplus
} // extern "C"
} // namespace capi
#endif
#endif
