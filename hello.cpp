#include <rice/rice.hpp>

using namespace Rice;

extern "C"
void Init_hello()
{
  Class rb_cHello = define_class("Hello");
  rb_cHello.define_function("world", []() {
    return 123;
  });
}
