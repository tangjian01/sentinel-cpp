#pragma once

#include <string>

#include "sentinel-core/common/resource_wrapper.h"

namespace Sentinel {
class StringResourceWrapper : public ResourceWrapper {
 public:
  StringResourceWrapper(const std::string& name, EntryType type)
      : name_(name), entry_type_(type) {}
  virtual ~StringResourceWrapper() = default;

  const std::string& Name() override { return name_; }
  EntryType EntryType() override { return entry_type_; }

 private:
  std::string name_;
  EntryType entry_type_;
};

}  // namespace Sentinel
