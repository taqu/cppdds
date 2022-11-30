#include "catch_wrap.hpp"
#include <filesystem>
#include <fstream>
#include <string>
#include "../cppdds.h"

bool read_dds(const std::string& path)
{
    std::ifstream file(path, std::ios::binary);
    if(!file.is_open()){
        return false;
    }
    file.seekg(0, std::ios::end);
    size_t size = file.tellg();
    file.seekg(0, std::ios::beg);
    uint8_t* src = reinterpret_cast<uint8_t*>(::malloc(sizeof(uint8_t)*size));
    file.read(reinterpret_cast<char*>(src), size);
    file.close();

    uint32_t width;
    uint32_t height;
    uint32_t depth;
    uint32_t mipmaps;
    uint32_t array;
    uint32_t cubemaps;
    uint32_t format;

    uint32_t dst_size = cppdds::cppdds_read(
        0, nullptr,
        &width,
        &height,
        &depth,
        &mipmaps,
        &array,
        &cubemaps,
        &format,
        static_cast<uint32_t>(size),
        src);
    if(dst_size<=0){
        FAIL_CHECK();
        return false;
    }
    uint8_t* dst = reinterpret_cast<uint8_t*>(::malloc(sizeof(uint8_t)*dst_size));
    dst_size = cppdds::cppdds_read(
        dst_size, dst,
        &width,
        &height,
        &depth,
        &mipmaps,
        &array,
        &cubemaps,
        &format,
        static_cast<uint32_t>(size),
        src);
    if(dst_size<=0){
        FAIL_CHECK();
        return false;
    }
    ::free(dst);
    ::free(src);
    SUCCEED();
    return true;
}

TEST_CASE("TestCppdds")
{
    using namespace std::filesystem;
    for(const directory_entry& x: directory_iterator("../images")) {
        std::string path = x.path().string();
        read_dds(path);
    }
}

