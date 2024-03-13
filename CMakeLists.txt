cmake_minimum_required(VERSION 3.8)
project(com3 VERSION 2 LANGUAGES CXX)

install(FILES excavator_com3/excavator_com3_struct.hpp excavator_com3/excavator_com3_dbc.hpp
       DESTINATION include/com3)


install(FILES excavator_com3/excavator_com3.dbc
       DESTINATION share/dbc)
