cmake_minimum_required(VERSION 3.14)

find_package(Git QUIET)
if(NOT GIT_EXECUTABLE)
    find_program(GIT_EXECUTABLE git PATHS
        "$ENV{ProgramFiles}/Microsoft Visual Studio/*/*/Common7/IDE/CommonExtensions/Microsoft/TeamFoundation/Team Explorer/Git/cmd/"
        )
    find_package(Git)
endif()

include(FetchContent)
FetchContent_Declare(generator 
	GIT_REPOSITORY https://github.com/ohhmm/generator.git
	GIT_TAG main
	)
FetchContent_MakeAvailable(generator)

fold()
