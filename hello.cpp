#include <rice/rice.hpp>

using namespace Rice;

class Test
{
public:
  Test() {}
};


extern "C"
void Init_hello()
{
  Class rb_cHello = define_class<Test>("Hello").define_constructor(Constructor<Test>());
  rb_cHello.define_method("world", [](Test& self) { return Rice::Array(); });
  rb_cHello.define_method("world=", [](Test& self, Object value) {});
}
