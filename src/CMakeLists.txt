if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/solution.cpp)
  add_executable(myprogram solution.cpp main.cpp SmartPhone.cpp Electronic.cpp Computer.cpp)
else()
  add_executable(myprogram main.cpp SmartPhone.cpp Electronic.cpp Computer.cpp)
endif()

## Set compiler flags for the library
target_compile_options(myprogram PRIVATE
  "$<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>"
  "$<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall;-Wextra;-Werror;-pedantic;>"
)
