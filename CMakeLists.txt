cmake_minimum_required(VERSION 3.31)
project(math C)

set(CMAKE_C_STANDARD 11)

file(GLOB ARITHMETIC_SRCS arithmetic_operations/*.c arithmetic_operations/head/*.c)

file(GLOB NUMBERS_SRCS numbers/*.c)

file(GLOB ORDER_SRCS order_of_operations/*.c order_of_operations/head/*.c)

file(GLOB FRACTIONS_SRCS fractions_decimals_and_percentages/*.c fractions_decimals_and_percentages/head/*.c)

file(GLOB EXPONENTS_SRCS exponents_and_roots/*.c)

file(GLOB RATIOS_SRCS ratios_and_proportions/*.c ratios_and_proportions/head/*.c ratios_and_proportions/direct_and_inverse_proportions/*.c)

file(GLOB THEORY_SRCS basic_number_theory/*.c)

file(GLOB WORD_PROBLEMS_SRCS word_problems/*.c)

list(REMOVE_ITEM NUMBERS_SRCS "${CMAKE_CURRENT_SOURCE_DIR}/numbers/integers_numbers.c")

set(SOURCES
        main.c
        ${ARITHMETIC_SRCS}
        ${NUMBERS_SRCS}
        ${ORDER_SRCS}
        ${FRACTIONS_SRCS}
        ${EXPONENTS_SRCS}
        ${RATIOS_SRCS}
        ${THEORY_SRCS}
        ${WORD_PROBLEMS_SRCS}
)

add_executable(math ${SOURCES})

target_link_libraries(math m)