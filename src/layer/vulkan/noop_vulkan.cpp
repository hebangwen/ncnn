// Tencent is pleased to support the open source community by making ncnn available.
//
// Copyright (C) 2023 THL A29 Limited, a Tencent company. All rights reserved.
//
// Licensed under the BSD 3-Clause License (the "License"); you may not use this file except
// in compliance with the License. You may obtain a copy of the License at
//
// https://opensource.org/licenses/BSD-3-Clause
//
// Unless required by applicable law or agreed to in writing, software distributed
// under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, either express or implied. See the License for the
// specific language governing permissions and limitations under the License.

#include "noop_vulkan.h"

namespace ncnn {

Noop_vulkan::Noop_vulkan()
{
    support_vulkan = true;
}

int Noop_vulkan::forward_inplace(std::vector<VkMat>& /*bottom_top_blobs*/, VkCompute& /*cmd*/, const Option& /*opt*/) const
{
    return 0;
}

} // namespace ncnn
