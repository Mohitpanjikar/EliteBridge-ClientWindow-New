# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Jobs_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Jobs_autogen.dir\\ParseCache.txt"
  "Jobs_autogen"
  )
endif()
