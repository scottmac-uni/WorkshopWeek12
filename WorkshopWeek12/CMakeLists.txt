# CMakeList.txt : CMake project for WorkshopWeek12, include source and define
# project specific logic here.
#

# Add source to this project's executable.

add_executable (WorkshopWeek12 "WorkshopWeek12.cpp" "WorkshopWeek12.h" "Human.cpp" "Human.h", "Location.h", "Entity.h",  "Animal.h" "Animal.cpp" "Lion.h" "Lion.cpp"  "Hippo.h" "Hippo.cpp" "Elephant.h" "Elephant.cpp" "Giraffe.h" "Giraffe.cpp" "Hyena.h" "Hyena.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET WorkshopWeek12 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
