#pragma once

#include "sentinel-core/property/sentinel_property.h"

#include <memory>
#include <string>

namespace Sentinel {
namespace DataSource {

template <typename S, typename T>
class ReadableDataSource {
 public:
  virtual ~ReadableDataSource() = default;
  virtual T LoadConfig() = 0;
  virtual S ReadSource() = 0;
  virtual std::shared_ptr<Property::SentinelProperty> GetProperty() = 0;
};

}
}
