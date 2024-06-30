/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

#pragma once

#include <memory>

#include "cyber/component/component.h"
#include "cyber/examples/proto/examples.pb.h"

namespace apollo {
namespace custom_module {

class CustomComponent final :
    public apollo::cyber::Component<apollo::cyber::examples::proto::Driver> {
 public:
  using Driver = apollo::cyber::examples::proto::Driver;

 public:
  bool Init() override;
  bool Proc(const std::shared_ptr<Driver>& msg) override;
};

CYBER_REGISTER_COMPONENT(CustomComponent)

}  // namespace custom_module
}  // namespace apollo
