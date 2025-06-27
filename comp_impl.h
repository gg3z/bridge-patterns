#pragma once

// would be nice to create automatically
struct CompImpl {
  virtual ~CompImpl() = default;
  virtual int op() = 0;
};

class CompImpl1 : public CompImpl {
public:
  virtual int op() override { return 11; }
};

class CompImpl2 : public CompImpl {
public:
  virtual int op() override { return 22; }
};