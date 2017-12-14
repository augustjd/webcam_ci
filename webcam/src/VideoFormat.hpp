#pragma once


struct VideoFormat {
    unsigned width;
    unsigned height;
    unsigned framerate;
};


bool operator==(const VideoFormat& l, const VideoFormat& r);