include(AddGoogleTest)

add_executable(unit_test 
                test_calc.cpp)

target_link_libraries(unit_test PRIVATE calculator GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(unit_test)