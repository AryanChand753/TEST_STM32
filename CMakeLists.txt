cmake_minimum_required(3.13.1)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(TEST_STM32)

set(BOARD stm43f103c8t6_blue_pill)

target_sources(app PRIVATE src/main.c)