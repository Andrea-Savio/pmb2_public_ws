# CMake generated Testfile for 
# Source directory: /home/andrea/pmb2_public_ws/src/xacro
# Build directory: /home/andrea/pmb2_public_ws/build/xacro
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_xacro_nosetests_test "/home/andrea/pmb2_public_ws/build/xacro/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/andrea/pmb2_public_ws/build/xacro/test_results/xacro/nosetests-test.xml" "--return-code" "\"/usr/bin/cmake\" -E make_directory /home/andrea/pmb2_public_ws/build/xacro/test_results/xacro" "/usr/bin/nosetests-2.7 -P --process-timeout=60 --where=/home/andrea/pmb2_public_ws/src/xacro/test --with-xunit --xunit-file=/home/andrea/pmb2_public_ws/build/xacro/test_results/xacro/nosetests-test.xml")
subdirs("gtest")
subdirs("test")
