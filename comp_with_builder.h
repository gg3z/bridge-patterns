#pragma once
#include "comp_impl.h"
#include <memory>

using namespace std;

struct Comp {
  virtual ~Comp() = default;
  virtual int op() = 0;
};

// CompImpled - short for Comp Implemented
struct CompImpled : Comp {
  shared_ptr<CompImpl> impl_;
  CompImpled(shared_ptr<CompImpl> impl) : impl_(impl) {}
  virtual int op() override { return impl_->op(); }
};

struct CompBuilder {
  template <class Injector> unique_ptr<Comp> build(const Injector &injector) {
    auto impl = injector.template create<shared_ptr<CompImpl>>();
    return make_unique<CompImpled>(impl);
  }
};
