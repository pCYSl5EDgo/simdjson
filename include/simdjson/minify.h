#ifndef SIMDJSON_MINIFY_H
#define SIMDJSON_MINIFY_H

#include "simdjson/common_defs.h"
#include "simdjson/padded_string.h"
#include <string>
#include <ostream>
#include <sstream>

namespace simdjson {



/**
 *
 * Minify the input string assuming that it represents a JSON string, does not parse or validate.
 * This function is much faster than parsing a JSON string and then writing a minified version of it.
 * However, it does not validate the input.
 *
 *
 * @param buf the json document to minify.
 * @param len the length of the json document.
 * @param dst the buffer to write the minified document to. *MUST* be allocated up to len + SIMDJSON_PADDING bytes.
 * @param dst_len the number of bytes written. Output only.
 * @return the error code, or SUCCESS if there was no error.
 */
SIMDJSON_WARN_UNUSED error_code minify(const char *buf, size_t len, char *dst, size_t &dst_len) noexcept;

} // namespace simdjson

#endif // SIMDJSON_MINIFY_H