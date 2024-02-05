cmake_minimum_required(VERSION 3.13.2)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(TEST_STM32)

set(BOARD stm32_min_dev_blue)

target_sources(app PRIVATE src/main.c)