#include "../include/hello_world.h"

#include <Wire.h>

namespace {

constexpr size_t DELAY = 1000;        // ms
constexpr auto BAUD_RATE = 115200;  // scalar

using VAR_TYPE = decltype(Foo::VAR_1_UPDATE);

}  // anonymous namespace

Foo::Foo() : _var1{1}, _var2{2} {}

void Foo::update() {
  _var1 += Foo::VAR_1_UPDATE;

  constexpr VAR_TYPE VAR_2_UPDATE = 2;
  _var2 += VAR_2_UPDATE;
}

static Foo foo;

void setup() {
  Serial.begin(BAUD_RATE);
  delay(DELAY);
}

void loop() {
  Serial.println("Hello world!");
  delay(DELAY);
  Serial.print("Var 1: ");
  Serial.println(foo.getVar1());
  Serial.print("Var 2: ");
  {
    // Serial doesn't support printing pointer addresses :(
    Serial.print("address: ");
    auto* v2Ptr = foo.getVar2();
    long v2Address = (long)v2Ptr;
    Serial.print(v2Address, HEX);
  }
  Serial.print(", value: ");
  Serial.println(*foo.getVar2());
  delay(DELAY);
  foo.update();
}
