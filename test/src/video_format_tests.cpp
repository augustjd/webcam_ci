#pragma once

#include <gtest/gtest.h>

#include <VideoFormat.hpp>


TEST(VideoFormat, EqualityOperator) {
    VideoFormat a = {1280, 720, 30};
    VideoFormat b = {1280, 720, 30};

    ASSERT_EQ(a, b);

    VideoFormat c = {1280, 720, 30};
    VideoFormat d = {1280, 1280, 30};

    ASSERT_TRUE(!(c == d));
}
