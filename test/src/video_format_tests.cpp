#pragma once

#include <gtest/gtest.h>

#include <VideoFormat.hpp>


TEST(VideoFormat, EqualityOperator) {
    VideoFormat a = {1280, 720, 30};
    VideoFormat b = {1280, 720, 30};

    ASSERT_EQ(a, b);
}
