// #include "bbox_intersector.h"
#include "boost/di.hpp"
#include "comp_impl.h"
#include "comp_minimal.h"
#include "comp_with_builder.h"
#include <iostream>

namespace di = boost::di;

void test_minimal_bridge() {
  cout << "With minimal bridge:\n";
  CompMin cm;
  cout << cm.op() << std::endl;
}

void test_bridge_with_builder() {
  CompBuilder builder;
  cout << "With builder and injector:\n";
  auto injector1 = di::make_injector(di::bind<CompImpl>().to<CompImpl1>());
  auto comp1 = builder.build(injector1);
  std::cout << "implementation 1: op() = " << comp1->op() << endl;
  auto injector2 = di::make_injector(di::bind<CompImpl>().to<CompImpl2>());
  auto comp2 = builder.build(injector2);
  std::cout << "implementation 2: op() = " << comp2->op() << endl;
}

int main() {
  test_minimal_bridge();
  test_bridge_with_builder();
  return 0;
}
