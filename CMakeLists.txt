cmake_minimum_required(VERSION 3.8)
project(com3 VERSION 2 LANGUAGES CXX)

# find_package(canary REQUIRED)

# find_package(Boost 1.70 REQUIRED)

# find_package(RTTR CONFIG REQUIRED Core)

# add_executable(hitachi_rc_driver hitachi_rc_driver.cpp)
# set_property(TARGET hitachi_rc_driver PROPERTY CXX_STANDARD 20)
# target_link_libraries(hitachi_rc_driver PUBLIC canary::canary
#                         boost_system
#                         boost_thread
#                         boost_timer
#                         dbcppp
#                         RTTR::Core)

#install(TARGETS hitachi_rc_driver
#        DESTINATION ${${CMAKE_INSTALL_INCLUDEDIR}}/hitachi_rc_driver)

install(FILES excavator_com3_struct.hpp excavator_com3_dbc.hpp
       DESTINATION include/com3)


install(FILES excavator_com3.dbc
       DESTINATION share/dbc)
