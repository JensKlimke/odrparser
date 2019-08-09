# Target must already exist
macro(add_gtest TESTNAME)
    target_link_libraries(${TESTNAME} PUBLIC gtest gmock gtest_main)

    if (GOOGLE_TEST_INDIVIDUAL)
        if (CMAKE_VERSION VERSION_LESS 3.10)
            gtest_add_tests(TARGET ${TESTNAME}
                    TEST_PREFIX "${TESTNAME}."
                    TEST_LIST TmpTestList)
            set_tests_properties(${TmpTestList} PROPERTIES FOLDER "Tests")
        else ()
            gtest_discover_tests(${TESTNAME}
                    TEST_PREFIX "${TESTNAME}."
                    PROPERTIES FOLDER "Tests")
        endif ()
    else ()
        add_test(${TESTNAME} ${TESTNAME})
        set_target_properties(${TESTNAME} PROPERTIES FOLDER "Tests")
    endif ()

endmacro()

mark_as_advanced(
        gmock_build_tests
        gtest_build_samples
        gtest_build_tests
        gtest_disable_pthreads
        gtest_force_shared_crt
        gtest_hide_internal_symbols
        BUILD_GMOCK
        BUILD_GTEST
)

set_target_properties(gtest gtest_main gmock gmock_main
        PROPERTIES FOLDER "Extern")
