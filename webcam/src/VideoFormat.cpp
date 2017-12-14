#include "VideoFormat.hpp"


bool operator==(const VideoFormat & l, const VideoFormat & r) {
	return l.width == r.width && l.height == r.height && l.framerate == r.framerate;
}