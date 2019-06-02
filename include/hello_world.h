#pragma once

#include <Arduino.h>

class Foo {
 public:
  Foo();

  void update();

  static constexpr uint8_t VAR_1_UPDATE = 1;

  const uint8_t& getVar1() { return _var1; }

  uint8_t const* getVar2() { return &_var2; }

 private:
  uint8_t _var1;
  uint8_t _var2;
};
