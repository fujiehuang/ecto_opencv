#pragma once

#include <opencv2/imgproc/imgproc.hpp>

namespace imgproc
{
  enum Interpolation
  {
   NN = cv::INTER_NEAREST,
   LINEAR = cv::INTER_LINEAR,
   CUBIC = cv::INTER_CUBIC,
   AREA = cv::INTER_AREA,
   LANCZOS4 = cv::INTER_LANCZOS4,
  };

  enum Conversion
  {
    /* Constants for color conversion */
   BGR2BGRA = cv::COLOR_BGR2BGRA,
   RGB2RGBA = cv::COLOR_RGB2RGBA,

   BGRA2BGR = cv::COLOR_BGRA2BGR,
   RGBA2RGB = cv::COLOR_RGBA2RGB,

   BGR2RGBA = cv::COLOR_BGR2RGBA,
   RGB2BGRA = cv::COLOR_RGB2BGRA,

   RGBA2BGR = cv::COLOR_RGBA2BGR,
   BGRA2RGB = cv::COLOR_BGRA2RGB,

   BGR2RGB = cv::COLOR_BGR2RGB,
   RGB2BGR = cv::COLOR_RGB2BGR,

   BGRA2RGBA = cv::COLOR_BGRA2RGBA,
   RGBA2BGRA = cv::COLOR_RGBA2BGRA,

   BGR2GRAY = cv::COLOR_BGR2GRAY,
   RGB2GRAY = cv::COLOR_RGB2GRAY,
   GRAY2BGR = cv::COLOR_GRAY2BGR,
   GRAY2RGB = cv::COLOR_GRAY2RGB,
   GRAY2BGRA = cv::COLOR_GRAY2BGRA,
   GRAY2RGBA = cv::COLOR_GRAY2RGBA,
   BGRA2GRAY = cv::COLOR_BGRA2GRAY,
   RGBA2GRAY = cv::COLOR_RGBA2GRAY,

   BGR2BGR565 = cv::COLOR_BGR2BGR565,
   RGB2BGR565 = cv::COLOR_RGB2BGR565,
   BGR5652BGR = cv::COLOR_BGR5652BGR,
   BGR5652RGB = cv::COLOR_BGR5652RGB,
   BGRA2BGR565 = cv::COLOR_BGRA2BGR565,
   RGBA2BGR565 = cv::COLOR_RGBA2BGR565,
   BGR5652BGRA = cv::COLOR_BGR5652BGRA,
   BGR5652RGBA = cv::COLOR_BGR5652RGBA,

   GRAY2BGR565 = cv::COLOR_GRAY2BGR565,
   BGR5652GRAY = cv::COLOR_BGR5652GRAY,

   BGR2BGR555 = cv::COLOR_BGR2BGR555,
   RGB2BGR555 = cv::COLOR_RGB2BGR555,
   BGR5552BGR = cv::COLOR_BGR5552BGR,
   BGR5552RGB = cv::COLOR_BGR5552RGB,
   BGRA2BGR555 = cv::COLOR_BGRA2BGR555,
   RGBA2BGR555 = cv::COLOR_RGBA2BGR555,
   BGR5552BGRA = cv::COLOR_BGR5552BGRA,
   BGR5552RGBA = cv::COLOR_BGR5552RGBA,

   GRAY2BGR555 = cv::COLOR_GRAY2BGR555,
   BGR5552GRAY = cv::COLOR_BGR5552GRAY,

   BGR2XYZ = cv::COLOR_BGR2XYZ,
   RGB2XYZ = cv::COLOR_RGB2XYZ,
   XYZ2BGR = cv::COLOR_XYZ2BGR,
   XYZ2RGB = cv::COLOR_XYZ2RGB,

   BGR2YCrCb = cv::COLOR_BGR2YCrCb,
   RGB2YCrCb = cv::COLOR_RGB2YCrCb,
   YCrCb2BGR = cv::COLOR_YCrCb2BGR,
   YCrCb2RGB = cv::COLOR_YCrCb2RGB,

   BGR2HSV = cv::COLOR_BGR2HSV,
   RGB2HSV = cv::COLOR_RGB2HSV,

   BGR2Lab = cv::COLOR_BGR2Lab,
   RGB2Lab = cv::COLOR_RGB2Lab,

   BayerBG2BGR = cv::COLOR_BayerBG2BGR,
   BayerGB2BGR = cv::COLOR_BayerGB2BGR,
   BayerRG2BGR = cv::COLOR_BayerRG2BGR,
   BayerGR2BGR = cv::COLOR_BayerGR2BGR,

   BayerBG2RGB = cv::COLOR_BayerBG2RGB,
   BayerGB2RGB = cv::COLOR_BayerGB2RGB,
   BayerRG2RGB = cv::COLOR_BayerRG2RGB,
   BayerGR2RGB = cv::COLOR_BayerGR2RGB,

   BGR2Luv = cv::COLOR_BGR2Luv,
   RGB2Luv = cv::COLOR_RGB2Luv,
   BGR2HLS = cv::COLOR_BGR2HLS,
   RGB2HLS = cv::COLOR_RGB2HLS,

   HSV2BGR = cv::COLOR_HSV2BGR,
   HSV2RGB = cv::COLOR_HSV2RGB,

   Lab2BGR = cv::COLOR_Lab2BGR,
   Lab2RGB = cv::COLOR_Lab2RGB,
   Luv2BGR = cv::COLOR_Luv2BGR,
   Luv2RGB = cv::COLOR_Luv2RGB,
   HLS2BGR = cv::COLOR_HLS2BGR,
   HLS2RGB = cv::COLOR_HLS2RGB,

   BayerBG2BGR_VNG = cv::COLOR_BayerBG2BGR_VNG,
   BayerGB2BGR_VNG = cv::COLOR_BayerGB2BGR_VNG,
   BayerRG2BGR_VNG = cv::COLOR_BayerRG2BGR_VNG,
   BayerGR2BGR_VNG = cv::COLOR_BayerGR2BGR_VNG,

   BayerBG2RGB_VNG = cv::COLOR_BayerBG2RGB_VNG,
   BayerGB2RGB_VNG = cv::COLOR_BayerGB2RGB_VNG,
   BayerRG2RGB_VNG = cv::COLOR_BayerRG2RGB_VNG,
   BayerGR2RGB_VNG = cv::COLOR_BayerGR2RGB_VNG,

   BGR2HSV_FULL = cv::COLOR_BGR2HSV_FULL,
   RGB2HSV_FULL = cv::COLOR_RGB2HSV_FULL,
   BGR2HLS_FULL = cv::COLOR_BGR2HLS_FULL,
   RGB2HLS_FULL = cv::COLOR_RGB2HLS_FULL,

   HSV2BGR_FULL = cv::COLOR_HSV2BGR_FULL,
   HSV2RGB_FULL = cv::COLOR_HSV2RGB_FULL,
   HLS2BGR_FULL = cv::COLOR_HLS2BGR_FULL,
   HLS2RGB_FULL = cv::COLOR_HLS2RGB_FULL,

   LBGR2Lab = cv::COLOR_LBGR2Lab,
   LRGB2Lab = cv::COLOR_LRGB2Lab,
   LBGR2Luv = cv::COLOR_LBGR2Luv,
   LRGB2Luv = cv::COLOR_LRGB2Luv,

   Lab2LBGR = cv::COLOR_Lab2LBGR,
   Lab2LRGB = cv::COLOR_Lab2LRGB,
   Luv2LBGR = cv::COLOR_Luv2LBGR,
   Luv2LRGB = cv::COLOR_Luv2LRGB,

   BGR2YUV = cv::COLOR_BGR2YUV,
   RGB2YUV = cv::COLOR_RGB2YUV,
   YUV2BGR = cv::COLOR_YUV2BGR,
   YUV2RGB = cv::COLOR_YUV2RGB,

   BayerBG2GRAY = cv::COLOR_BayerBG2GRAY,
   BayerGB2GRAY = cv::COLOR_BayerGB2GRAY,
   BayerRG2GRAY = cv::COLOR_BayerRG2GRAY,
   BayerGR2GRAY = cv::COLOR_BayerGR2GRAY,
  };

  enum Morph
  {
    RECT = cv::MORPH_RECT, CROSS = cv::MORPH_CROSS, ELLIPSE = cv::MORPH_ELLIPSE
  };

  template<typename T>
  struct Filter_ : T
  {
    T* thiz()
    {
      return static_cast<T*>(this);
    }

    static void
    declare_params(ecto::tendrils& p)
    {
      T::declare_params(p);
    }

    static void
    declare_io(const ecto::tendrils& p, ecto::tendrils& i, ecto::tendrils& o)
    {
      i.declare(&Filter_::input_,"image", "An image.").required(true);
      o.declare(&Filter_::output_,"image", "The filtered image.");
    }

    void
    configure(const ecto::tendrils& p, const ecto::tendrils& i, const ecto::tendrils& o)
    {
      thiz()->configure(p, i, o);
    }

    int
    process(const ecto::tendrils& i, const ecto::tendrils& o)
    {
      *output_ = cv::Mat(); //reset the output so that the cv mat is reallocated
      if (input_->empty())
        return ecto::OK;
      return thiz()->process(i, o,*input_, *output_);
    }
    ecto::spore<cv::Mat> input_, output_;
  };
}
