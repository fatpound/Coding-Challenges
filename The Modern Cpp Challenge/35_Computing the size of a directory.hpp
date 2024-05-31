#pragma once

#include <cstdint>

#include <filesystem>

namespace fatpound::coding_challenges::tmcc::q35
{
    namespace fs = std::filesystem;

    auto GetDirectorySize(const fs::path& path, const bool follow_symlinks = false) -> std::uintmax_t;

    void Run();
}