# For library
add_library(app SHARED "")

target_sources(
  app
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/entities/misc/Device.hpp
  )

target_include_directories(
  app
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/entities/misc
  )

# For standalone app
add_executable(app.x "")

target_sources(
  app.x
  PRIVATE
    main.cpp
  )

target_link_libraries(
  app.x
  PRIVATE
    app
  )

# target_include_directories(
#   app.x
#   PRIVATE
#     ${PROJECT_BINARY_DIR}/generated
#   )

# install(
#   TARGETS app.x
#   RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
#   )

# install(
#   TARGETS app
#   LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
#   ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
#   )