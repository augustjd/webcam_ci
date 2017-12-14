#include "VideoFormat.hpp"

#include <iostream>


namespace cam {

bool operator==(const VideoFormat & l, const VideoFormat & r) {
	return l.width == r.width && l.height == r.height && l.framerate == r.framerate;
}


bool operator!=(const VideoFormat & l, const VideoFormat & r) {
	return !(l == r);
}


std::ostream& operator<<(std::ostream& oss, const VideoFormat& format) {
	return oss << format.width << "x" << format.height << "@" << format.framerate << "fps";
}

}