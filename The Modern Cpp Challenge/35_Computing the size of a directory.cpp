#include "35_Computing the size of a directory.hpp"

#include <iostream>
#include <numeric>

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

            std::uintmax_t size = 0u;

            for (const auto& inner_path : rdit)
            {
                if (fs::is_regular_file(inner_path)) [[likely]]
                {
                    size += fs::file_size(inner_path);
                }
            }

            return size;
        }
    }

    void Run()
    {
        std::cout << GetDirectorySize("../");
    }
}