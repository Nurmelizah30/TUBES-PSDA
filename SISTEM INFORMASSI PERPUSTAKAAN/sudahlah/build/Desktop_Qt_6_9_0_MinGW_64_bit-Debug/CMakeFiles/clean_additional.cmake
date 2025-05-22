# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\sudahlah_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\sudahlah_autogen.dir\\ParseCache.txt"
  "sudahlah_autogen"
  )
endif()
