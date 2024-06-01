#include "35_Computing the size of a directory.hpp"

#include <iostream>
#include <numeric>

namespace fs = std::filesystem;

namespace fatpound::coding_challenges::tmcc::q35
{
    auto GetDirectorySize(const fs::path& path, const bool follow_symlinks) -> std::uintmax_t
    {
        if (fs::is_regular_file(path)) [[unlikely]]
        {
            return fs::file_size(path);
        }
        else [[likely]]
        {
            fs::recursive_directory_iterator rdit = {
                path,

                follow_symlinks
                ? fs::directory_options::follow_directory_symlink
                : fs::directory_options::skip_permission_denied
            };

            const auto& size = std::accumulate(
                fs::begin(rdit),
                fs::end(rdit),
                0ull,
                [](const auto& total, const auto& dir_entry) -> std::uintmax_t
                {
                    return total + (fs::is_regular_file(dir_entry) ? fs::file_size(dir_entry) : 0ull);
                }
            );

            return size;
        }
    }

    void Run()
    {
        std::cout << GetDirectorySize("../");
    }
}