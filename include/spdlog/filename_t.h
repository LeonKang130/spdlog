// Copyright(c) 2015-present, Gabi Melman & spdlog contributors.
// Distributed under the MIT License (http://opensource.org/licenses/MIT)

#pragma once

#include <filesystem>

#ifdef _WIN32
    // In windows, add L prefix for filename literals (e.g. L"filename.txt")
    #define SPDLOG_FILENAME_T_INNER(s) L##s
    #define SPDLOG_FILENAME_T(s) SPDLOG_FILENAME_T_INNER(s)
#else
    #define SPDLOG_FILENAME_T(s) s
#endif

namespace spdlog {
using filename_t = std::filesystem::path;
}  // namespace spdlog
