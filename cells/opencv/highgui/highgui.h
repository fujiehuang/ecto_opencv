#pragma once
#include <opencv2/highgui/highgui.hpp>
namespace ecto_opencv
{
  namespace Record
  {
    enum RecordCommands
    {
      START = 0, RESUME = 1, PAUSE = 2, STOP = 3,
    };

  }
  namespace Image
  {
    enum Modes
    {
      /* 8bit, color or not */
      UNCHANGED = cv::IMREAD_UNCHANGED,
      /* 8bit, gray */
      GRAYSCALE = cv::IMREAD_GRAYSCALE,
      /* ?, color */
      COLOR = cv::IMREAD_COLOR,
      /* any depth, ? */
      ANYDEPTH = cv::IMREAD_ANYDEPTH,
      /* ?, any color */
      ANYCOLOR = cv::IMREAD_ANYCOLOR
    };
  }
}
