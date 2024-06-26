#pragma once

#include <cstdint>

#include <filesystem>

namespace fatpound::coding_challenges::tmcc::q35
{
    auto GetDirectorySize(const std::filesystem::path& path, const bool follow_symlinks = false) -> std::uintmax_t;

    void Run();
}