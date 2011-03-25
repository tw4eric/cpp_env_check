# Picked and modified from: http://osdir.com/ml/kde-commits/2010-05/msg09988.html
# Another reference point: http://code.google.com/p/createtetzone/
# Locate the Google C++ Mocking Framework.

set (GTEST_FOUND FALSE)
find_program(GTEST-CONFIG_EXECUTABLE NAMES gtest-config PATHS)

if(GTEST-CONFIG_EXECUTABLE)
	exec_program(${GTEST-CONFIG_EXECUTABLE} ARGS --includedir OUTPUT_VARIABLE GOOGLETEST_INCLUDE_DIR)
	exec_program(${GTEST-CONFIG_EXECUTABLE} ARGS --ldflags OUTPUT_VARIABLE GOOGLETEST_LDFLAGS)
	exec_program(${GTEST-CONFIG_EXECUTABLE} ARGS --libs OUTPUT_VARIABLE GOOGLETEST_libs_tmp)
	set(GOOGLETEST_LIBRARIES "${GOOGLETEST_LDFLAGS} ${GOOGLETEST_libs_tmp}")
	set(GTEST_FOUND TRUE)
endif()

if (${GTEST_FOUND})
	message (FATAL_ERROR "GTEST not found!")
endif ()
