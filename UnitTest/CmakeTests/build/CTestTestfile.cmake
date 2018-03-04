# CMake generated Testfile for 
# Source directory: /home/emil/git/USV_autopilot/UnitTest/CmakeTests
# Build directory: /home/emil/git/USV_autopilot/UnitTest/CmakeTests/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(that-test-I-made "/home/emil/git/USV_autopilot/UnitTest/CmakeTests/build/runUnitTests")
add_test(that-other-test-I-made "runUnitTests")
subdirs("lib/gtest-1.6.0")
