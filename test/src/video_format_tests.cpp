#pragma once

#include <sstream>

#include <gtest/gtest.h>

#include <VideoFormat.hpp>


TEST(VideoFormat, EqualityOperator) {
    cam::VideoFormat a = {1280, 720, 30};
    cam::VideoFormat b = {1280, 720, 30};

    ASSERT_EQ(a, b);
}


TEST(VideoFormat, NotEqualsOperator) {
    cam::VideoFormat c = {1280, 720, 30};
    cam::VideoFormat d = {1280, 1280, 30};

    ASSERT_NE(c, d);
}


TEST(VideoFormat, TestStreamOperator) {
	cam::VideoFormat c = { 1280, 720, 30 };

	std::ostringstream oss;
	oss << c;

	ASSERT_EQ(oss.str(), "1280x720@30fps");
}