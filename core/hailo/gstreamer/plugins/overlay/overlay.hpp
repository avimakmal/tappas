/**
* Copyright (c) 2021-2022 Hailo Technologies Ltd. All rights reserved.
* Distributed under the LGPL license (https://www.gnu.org/licenses/old-licenses/lgpl-2.1.txt)
**/
/**
 * @file overlay.hpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#pragma once

#include <map>
#include <vector>
#include "hailo_objects.hpp"
#include "common/image.hpp"

typedef enum
{
    OVERLAY_STATUS_UNINITIALIZED = -1,
    OVERLAY_STATUS_OK,

} overlay_status_t;

__BEGIN_DECLS
overlay_status_t draw_all(HailoMat &hmat, HailoROIPtr roi, bool show_confidence = true);
void face_blur(cv::Mat &mat, HailoROIPtr roi);

cv::Scalar RGB_TO_YUY2(cv::Scalar rgb);
cv::Scalar indexToColor(size_t index);

__END_DECLS