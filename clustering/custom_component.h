

#pragma once

#include <memory>

#include "common_msgs/perception_msgs/perception_obstacle.pb.h"
#include "common_msgs/sensor_msgs/pointcloud.pb.h"

#include "cyber/component/component.h"

namespace apollo {
namespace custom_module {

class CustomComponent final
    : public apollo::cyber::Component<apollo::drivers::PointCloud> {
 public:
  using PointCloud = apollo::drivers::PointCloud;
  using PerceptionObstacles = apollo::perception::PerceptionObstacles;

 public:
  bool Init() override;
  bool Proc(const std::shared_ptr<PointCloud>& msg) override;

 private:
  std::unique_ptr<Cluster> cluster_;
  apollo::cyber::Writer<PerceptionObstacles> obstacles_;
};

CYBER_REGISTER_COMPONENT(CustomComponent)

}  // namespace custom_module
}  // namespace apollo
