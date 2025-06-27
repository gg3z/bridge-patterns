#pragma once
#include <memory>
#include <string>

using namespace std;

// minimal bridge pattern (or pimpl idiom if only one implementation is needed):
// the implementation is encapsulated but not abstracted
struct CompMinImpl1 {
  string opImpl() { return string("this is implementation 1\n"); }
};

struct CompMinImpl2 {
  string opImpl() { return string("this is implementation 2\n"); }
};

class CompMin {
  // this is where the implementation is chosen
  shared_ptr<CompMinImpl1> impl_;

public:
  string op() { return impl_->opImpl(); }
};
