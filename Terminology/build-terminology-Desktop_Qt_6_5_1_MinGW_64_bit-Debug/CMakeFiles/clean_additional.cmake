# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\terminology_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\terminology_autogen.dir\\ParseCache.txt"
  "terminology_autogen"
  )
endif()
