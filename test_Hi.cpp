#include <cassert>
#include <iostream>
#include "hi.hpp"

int main()
{
  assert(0 == strcmp_case_insensitive("",""));
  assert(0 == strcmp_case_insensitive("Hi","hi"));
  assert(0 == strcmp_case_insensitive("aPpLE","ApPle"));
  assert(-1 == strcmp_case_insensitive("Hi",""));
  assert(-1 == strcmp_case_insensitive("hi","t"));
  assert(1 == strcmp_case_insensitive("AppLicatION","apple"));
  assert(1 == strcmp_case_insensitive("orange","apple"));
  return 0;
}
