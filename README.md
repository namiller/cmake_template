#CMAKE project layout

Here is an example of how I lay out my cmake project to offer flexibility and convenience in testing, library development and functionality demonstration

sub1/ -- a user written library
  src/ -- source files
  include/ -- header files
  test/ -- unit tests for library functionality
sub2/ -- a user written library that depends on sub1
  src/ -- source files
  include/ -- header files
  test/ -- unit tests for library functionality
exec1/ -- contains a demonstrational executable that depends on sub1 and sub2
  src/ -- source files
  include/ -- header files
test/ -- integration tests.
