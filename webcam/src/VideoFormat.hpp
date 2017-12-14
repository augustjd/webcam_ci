#pragma once

#include <iosfwd>


namespace cam {

struct VideoFormat {
    unsigned width;
    unsigned height;
    unsigned framerate;
};


bool operator==(const VideoFormat& l, const VideoFormat& r);
bool operator!=(const VideoFormat& l, const VideoFormat& r);

std::ostream& operator<<(std::ostream& oss, const VideoFormat& format);

}