cmake_minimum_required(VERSION 2.8)

project(Demo)

#指定头文件的搜索路径
include_directories ("${PROJECT_SOURCE_DIR}/pow")

#指定子目录也进行编译
add_subdirectory (pow)  

#引用库文件
list(APPEND EXTRA_LIBS pow)

include_directories ("${PROJECT_SOURCE_DIR}/sqrt")
add_subdirectory (sqrt)  
list(APPEND EXTRA_LIBS sqrt)

#message可以打印变量的值
MESSAGE( STATUS "this var key = ${EXTRA_LIBS}.")

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 指定生成目标
add_executable(Demo ${DIR_SRCS})
target_link_libraries (Demo  ${EXTRA_LIBS})
