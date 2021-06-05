#include <boost/python.hpp>

#include <opencv2/highgui/highgui.hpp>

namespace bp = boost::python;
namespace opencv_wrappers
{
  void wrap_highgui_defines()
  {
    bp::object opencv = bp::scope();
    /*
    opencv.attr("CV_FONT_LIGHT") = int(cv::FONT_LIGHT);
    opencv.attr("CV_FONT_NORMAL") = int(cv::FONT_NORMAL);
    opencv.attr("CV_FONT_DEMIBOLD") = int(cv::FONT_DEMIBOLD);
    opencv.attr("CV_FONT_BOLD") = int(cv::FONT_BOLD);
    opencv.attr("CV_FONT_BLACK") = int(cv::FONT_BLACK);
    opencv.attr("CV_STYLE_NORMAL") = int(cv::STYLE_NORMAL);
    opencv.attr("CV_STYLE_ITALIC") = int(cv::STYLE_ITALIC);
    opencv.attr("CV_STYLE_OBLIQUE") = int(cv::STYLE_OBLIQUE);
  */
    //These 3 flags are used by cvSet/GetWindowProperty
    opencv.attr("CV_WND_PROP_FULLSCREEN") = int(cv::WND_PROP_FULLSCREEN);
    opencv.attr("CV_WND_PROP_AUTOSIZE") = int(cv::WND_PROP_AUTOSIZE);
    //opencv.attr("CV_WND_PROP_ASPECTRATIO") = int(cv::WND_PROP_ASPECTRATIO);
    //
    //These 2 flags are used by cvNamedWindow and cvSet/GetWindowProperty
    opencv.attr("CV_WINDOW_NORMAL") = int(cv::WINDOW_NORMAL);
    opencv.attr("CV_WINDOW_AUTOSIZE") = int(cv::WINDOW_AUTOSIZE);
    //
    //Those flags are only for Qt
    //opencv.attr("CV_GUI_EXPANDED") = int(cv::GUI_EXPANDED);
    //opencv.attr("CV_GUI_NORMAL") = int(cv::GUI_NORMAL);
    //
    //These 3 flags are used by cvNamedWindow and cvSet/GetWindowProperty
    opencv.attr("CV_WINDOW_FULLSCREEN") = int(cv::WINDOW_FULLSCREEN);
    opencv.attr("CV_WINDOW_FREERATIO") = int(cv::WINDOW_FREERATIO);
    opencv.attr("CV_WINDOW_KEEPRATIO") = int(cv::WINDOW_KEEPRATIO);

    opencv.attr("CV_EVENT_MOUSEMOVE") = int(cv::EVENT_MOUSEMOVE);
    opencv.attr("CV_EVENT_LBUTTONDOWN") = int(cv::EVENT_LBUTTONDOWN);
    opencv.attr("CV_EVENT_RBUTTONDOWN") = int(cv::EVENT_RBUTTONDOWN);
    opencv.attr("CV_EVENT_MBUTTONDOWN") = int(cv::EVENT_MBUTTONDOWN);
    opencv.attr("CV_EVENT_LBUTTONUP") = int(cv::EVENT_LBUTTONUP);
    opencv.attr("CV_EVENT_RBUTTONUP") = int(cv::EVENT_RBUTTONUP);
    opencv.attr("CV_EVENT_MBUTTONUP") = int(cv::EVENT_MBUTTONUP);
    opencv.attr("CV_EVENT_LBUTTONDBLCLK") = int(cv::EVENT_LBUTTONDBLCLK);
    opencv.attr("CV_EVENT_RBUTTONDBLCLK") = int(cv::EVENT_RBUTTONDBLCLK);
    opencv.attr("CV_EVENT_MBUTTONDBLCLK") = int(cv::EVENT_MBUTTONDBLCLK);
    opencv.attr("CV_EVENT_FLAG_LBUTTON") = int(cv::EVENT_FLAG_LBUTTON);
    opencv.attr("CV_EVENT_FLAG_RBUTTON") = int(cv::EVENT_FLAG_RBUTTON);
    opencv.attr("CV_EVENT_FLAG_MBUTTON") = int(cv::EVENT_FLAG_MBUTTON);
    opencv.attr("CV_EVENT_FLAG_CTRLKEY") = int(cv::EVENT_FLAG_CTRLKEY);
    opencv.attr("CV_EVENT_FLAG_SHIFTKEY") = int(cv::EVENT_FLAG_SHIFTKEY);
    opencv.attr("CV_EVENT_FLAG_ALTKEY") = int(cv::EVENT_FLAG_ALTKEY);

    opencv.attr("CV_LOAD_IMAGE_UNCHANGED") = int(cv::IMREAD_UNCHANGED);

    opencv.attr("CV_LOAD_IMAGE_GRAYSCALE") = int(cv::IMREAD_GRAYSCALE);
    opencv.attr("CV_LOAD_IMAGE_COLOR") = int(cv::IMREAD_COLOR);
    opencv.attr("CV_LOAD_IMAGE_ANYDEPTH") = int(cv::IMREAD_ANYDEPTH);
    opencv.attr("CV_LOAD_IMAGE_ANYCOLOR") = int(cv::IMREAD_ANYCOLOR);

    opencv.attr("CV_IMWRITE_JPEG_QUALITY") = int(cv::IMWRITE_JPEG_QUALITY);
    opencv.attr("CV_IMWRITE_PNG_COMPRESSION") = int(cv::IMWRITE_PNG_COMPRESSION);
    opencv.attr("CV_IMWRITE_PXM_BINARY") = int(cv::IMWRITE_PXM_BINARY);

    //opencv.attr("CV_CVTIMG_FLIP") = int(cv::CVTIMG_FLIP);
    //opencv.attr("CV_CVTIMG_SWAP_RB") = int(cv::CVTIMG_SWAP_RB);

    opencv.attr("CV_CAP_ANY") = int(cv::CAP_ANY);

    //opencv.attr("CV_CAP_MIL") = int(cv::CAP_MIL);

    opencv.attr("CV_CAP_VFW") = int(cv::CAP_VFW);
    opencv.attr("CV_CAP_V4L") = int(cv::CAP_V4L);
    opencv.attr("CV_CAP_V4L2") = int(cv::CAP_V4L2);

    opencv.attr("CV_CAP_FIREWARE") = int(cv::CAP_FIREWARE);
    opencv.attr("CV_CAP_FIREWIRE") = int(cv::CAP_FIREWIRE);
    opencv.attr("CV_CAP_IEEE1394") = int(cv::CAP_IEEE1394);
    opencv.attr("CV_CAP_DC1394") = int(cv::CAP_DC1394);
    opencv.attr("CV_CAP_CMU1394") = int(cv::CAP_CMU1394);

    //opencv.attr("CV_CAP_STEREO") = int(cv::CAP_STEREO);
    //opencv.attr("CV_CAP_TYZX") = int(cv::CAP_TYZX);
    //opencv.attr("CV_TYZX_LEFT") = int(cv::TYZX_LEFT);
    //opencv.attr("CV_TYZX_RIGHT") = int(cv::TYZX_RIGHT);
    //opencv.attr("CV_TYZX_COLOR") = int(cv::TYZX_COLOR);
    //opencv.attr("CV_TYZX_Z") = int(cv::TYZX_Z);

    opencv.attr("CV_CAP_QT") = int(cv::CAP_QT);

    opencv.attr("CV_CAP_UNICAP") = int(cv::CAP_UNICAP);

    opencv.attr("CV_CAP_DSHOW") = int(cv::CAP_DSHOW);

    opencv.attr("CV_CAP_PVAPI") = int(cv::CAP_PVAPI);

    opencv.attr("CV_CAP_OPENNI") = int(cv::CAP_OPENNI);

    opencv.attr("CV_CAP_ANDROID") = int(cv::CAP_ANDROID);

    opencv.attr("CV_CAP_PROP_DC1394_OFF") = int(cv::CAP_PROP_DC1394_OFF);
    opencv.attr("CV_CAP_PROP_DC1394_MODE_MANUAL") = int(cv::CAP_PROP_DC1394_MODE_MANUAL);
    opencv.attr("CV_CAP_PROP_DC1394_MODE_AUTO") = int(cv::CAP_PROP_DC1394_MODE_AUTO);
    opencv.attr("CV_CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO") = int(cv::CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO);
    opencv.attr("CV_CAP_PROP_POS_MSEC") = int(cv::CAP_PROP_POS_MSEC);
    opencv.attr("CV_CAP_PROP_POS_FRAMES") = int(cv::CAP_PROP_POS_FRAMES);
    opencv.attr("CV_CAP_PROP_POS_AVI_RATIO") = int(cv::CAP_PROP_POS_AVI_RATIO);
    opencv.attr("CV_CAP_PROP_FRAME_WIDTH") = int(cv::CAP_PROP_FRAME_WIDTH);
    opencv.attr("CV_CAP_PROP_FRAME_HEIGHT") = int(cv::CAP_PROP_FRAME_HEIGHT);
    opencv.attr("CV_CAP_PROP_FPS") = int(cv::CAP_PROP_FPS);
    opencv.attr("CV_CAP_PROP_FOURCC") = int(cv::CAP_PROP_FOURCC);
    opencv.attr("CV_CAP_PROP_FRAME_COUNT") = int(cv::CAP_PROP_FRAME_COUNT);
    opencv.attr("CV_CAP_PROP_FORMAT") = int(cv::CAP_PROP_FORMAT);
    opencv.attr("CV_CAP_PROP_MODE") = int(cv::CAP_PROP_MODE);
    opencv.attr("CV_CAP_PROP_BRIGHTNESS") = int(cv::CAP_PROP_BRIGHTNESS);
    opencv.attr("CV_CAP_PROP_CONTRAST") = int(cv::CAP_PROP_CONTRAST);
    opencv.attr("CV_CAP_PROP_SATURATION") = int(cv::CAP_PROP_SATURATION);
    opencv.attr("CV_CAP_PROP_HUE") = int(cv::CAP_PROP_HUE);
    opencv.attr("CV_CAP_PROP_GAIN") = int(cv::CAP_PROP_GAIN);
    opencv.attr("CV_CAP_PROP_EXPOSURE") = int(cv::CAP_PROP_EXPOSURE);
    opencv.attr("CV_CAP_PROP_CONVERT_RGB") = int(cv::CAP_PROP_CONVERT_RGB);
    //#if CV_MAJOR_VERSION == 3
    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_BLUE_U") = int(cv::CAP_PROP_WHITE_BALANCE_BLUE_U);
    //#elif CV_MAJOR_VERSION == 2 && (CV_MINOR_VERSION > 4 || (CV_MINOR_VERSION == 4 && CV_SUBMINOR_VERSION > 10))
    //    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_U") = int(cv::CAP_PROP_WHITE_BALANCE_U);
    //#else
    //    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_BLUE_U") = int(cv::CAP_PROP_WHITE_BALANCE_BLUE_U);
    //#endif
    opencv.attr("CV_CAP_PROP_RECTIFICATION") = int(cv::CAP_PROP_RECTIFICATION);
    //#if CV_MAJOR_VERSION == 3
    opencv.attr("CV_CAP_PROP_MONOCHROME") = int(cv::CAP_PROP_MONOCHROME);
    //#else
    //    opencv.attr("CV_CAP_PROP_MONOCROME") = int(cv::CAP_PROP_MONOCROME);
    //#endif
    opencv.attr("CV_CAP_PROP_SHARPNESS") = int(cv::CAP_PROP_SHARPNESS);
    opencv.attr("CV_CAP_PROP_AUTO_EXPOSURE") = int(cv::CAP_PROP_AUTO_EXPOSURE);
    // user can adjust refernce level
    // using this feature
    opencv.attr("CV_CAP_PROP_GAMMA") = int(cv::CAP_PROP_GAMMA);
    opencv.attr("CV_CAP_PROP_TEMPERATURE") = int(cv::CAP_PROP_TEMPERATURE);
    opencv.attr("CV_CAP_PROP_TRIGGER") = int(cv::CAP_PROP_TRIGGER);
    opencv.attr("CV_CAP_PROP_TRIGGER_DELAY") = int(cv::CAP_PROP_TRIGGER_DELAY);
    //#if CV_MAJOR_VERSION == 3
    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_RED_V") = int(cv::CAP_PROP_WHITE_BALANCE_RED_V);
    //#elif CV_MAJOR_VERSION > 2 || (CV_MAJOR_VERSION == 2 && (CV_MINOR_VERSION > 4 || (CV_MINOR_VERSION == 4 && CV_SUBMINOR_VERSION > 10)))
    //    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_V") = int(cv::CAP_PROP_WHITE_BALANCE_V);
    //#else
    //    opencv.attr("CV_CAP_PROP_WHITE_BALANCE_RED_V") = int(cv::CAP_PROP_WHITE_BALANCE_RED_V);
    //#endif
    //opencv.attr("CV_CAP_PROP_MAX_DC1394") = int(cv::CAP_PROP_MAX_DC1394);
    // OpenNI map generators
    opencv.attr("CV_CAP_OPENNI_DEPTH_GENERATOR") = int(cv::CAP_OPENNI_DEPTH_GENERATOR);
    opencv.attr("CV_CAP_OPENNI_IMAGE_GENERATOR") = int(cv::CAP_OPENNI_IMAGE_GENERATOR);
    opencv.attr("CV_CAP_OPENNI_GENERATORS_MASK") = int(cv::CAP_OPENNI_GENERATORS_MASK);

    // Properties of cameras avalible through OpenNI interfaces
    opencv.attr("CV_CAP_PROP_OPENNI_OUTPUT_MODE") = int(cv::CAP_PROP_OPENNI_OUTPUT_MODE);
    opencv.attr("CV_CAP_PROP_OPENNI_FRAME_MAX_DEPTH") = int(cv::CAP_PROP_OPENNI_FRAME_MAX_DEPTH);
    opencv.attr("CV_CAP_PROP_OPENNI_BASELINE") = int(cv::CAP_PROP_OPENNI_BASELINE);
    opencv.attr("CV_CAP_PROP_OPENNI_FOCAL_LENGTH") = int(cv::CAP_PROP_OPENNI_FOCAL_LENGTH);
    opencv.attr("CV_CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE") = int(cv::CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE);
    opencv.attr("CV_CAP_OPENNI_DEPTH_GENERATOR_BASELINE") = int(cv::CAP_OPENNI_DEPTH_GENERATOR_BASELINE);
    opencv.attr("CV_CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH") = int(cv::CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH);
    opencv.attr("CV_CAP_OPENNI_DEPTH_MAP") = int(cv::CAP_OPENNI_DEPTH_MAP);
    opencv.attr("CV_CAP_OPENNI_POINT_CLOUD_MAP") = int(cv::CAP_OPENNI_POINT_CLOUD_MAP);
    opencv.attr("CV_CAP_OPENNI_DISPARITY_MAP") = int(cv::CAP_OPENNI_DISPARITY_MAP);
    opencv.attr("CV_CAP_OPENNI_DISPARITY_MAP_32F") = int(cv::CAP_OPENNI_DISPARITY_MAP_32F);
    opencv.attr("CV_CAP_OPENNI_VALID_DEPTH_MASK") = int(cv::CAP_OPENNI_VALID_DEPTH_MASK);

    opencv.attr("CV_CAP_OPENNI_BGR_IMAGE") = int(cv::CAP_OPENNI_BGR_IMAGE);
    opencv.attr("CV_CAP_OPENNI_GRAY_IMAGE") = int(cv::CAP_OPENNI_GRAY_IMAGE);

    opencv.attr("CV_CAP_OPENNI_VGA_30HZ") = int(cv::CAP_OPENNI_VGA_30HZ);
    opencv.attr("CV_CAP_OPENNI_SXGA_15HZ") = int(cv::CAP_OPENNI_SXGA_15HZ);

#if CV_MAJOR_VERSION == 2
    opencv.attr("CV_CAP_ANDROID_COLOR_FRAME") = int(cv::CAP_ANDROID_COLOR_FRAME);
    opencv.attr("CV_CAP_ANDROID_GREY_FRAME") = int(cv::CAP_ANDROID_GREY_FRAME);
#endif
    //opencv.attr("CV_CAP_ANDROID_YUV_FRAME") = int(cv::CAP_ANDROID_YUV_FRAME);
  }
}
