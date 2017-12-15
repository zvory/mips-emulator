#include "cppspec.hpp"
extern "C" {
#include "../test.h"
}

describe mult_by_two_spec("multByTwo", $ {

  it("doubles the input", _ {
    expect(multByTwo(2)).to_equal(4);
  });

  it("fails when i make it fail", _ {
    expect(multByTwo(2)).to_equal(1);
  });

});

int main()
{
  return CppSpec::Runner(CppSpec::Formatters::verbose)
                 .add_spec(mult_by_two_spec)
                 .exec()
             ? EXIT_SUCCESS
             : EXIT_FAILURE;
}