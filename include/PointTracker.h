#ifndef __POINTTRACKER_H_
#define __POINTTRACKER_H_

#include <iostream>
#include <opencv2/opencv.hpp>

class SingleImage
{
public:
    SingleImage(std::string img_path);
    cv::Mat readImage();
    void draw(std::vector<cv::KeyPoint>& pts);

private:
    std::string img_path_;
    cv::Mat img_;
};

#endif