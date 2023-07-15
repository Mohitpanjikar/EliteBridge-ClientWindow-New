# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "AuxElite_autogen"
  "CMakeFiles\\AuxElite_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\AuxElite_autogen.dir\\ParseCache.txt"
  )
endif()
