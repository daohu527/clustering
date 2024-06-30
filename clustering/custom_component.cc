
#include "clustering/custom_component.h"

bool CustomComponent::Init() {
  AINFO << "Custom component init";
  return true;
}

bool CustomComponent::Proc(const std::shared_ptr<PointCloud>& msg) {
  AINFO << "Start custom component Proc [" << msg->DebugString();
  return true;
}
