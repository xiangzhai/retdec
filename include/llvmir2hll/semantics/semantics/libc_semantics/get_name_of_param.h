/**
* @file include/llvmir2hll/semantics/semantics/libc_semantics/get_name_of_param.h
* @brief Provides function getNameOfParam() for LibcSemantics in the
*        semantics::libc namespace.
* @copyright (c) 2017 Avast Software, licensed under the MIT license
*/

#ifndef LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_GET_NAME_OF_PARAM_H
#define LLVMIR2HLL_SEMANTICS_SEMANTICS_LIBC_SEMANTICS_GET_NAME_OF_PARAM_H

#include <string>

#include "llvmir2hll/support/maybe.h"

namespace llvmir2hll {
namespace semantics {
namespace libc {

Maybe<std::string> getNameOfParam(const std::string &funcName,
	unsigned paramPos);

} // namespace libc
} // namespace semantics
} // namespace llvmir2hll

#endif
