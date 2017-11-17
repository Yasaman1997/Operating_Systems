cmake_minimum_required(VERSION 3.8)
project(MultiThread)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c)

# pthread
set(CMAKE_USE_PTHREADS_INIT true)
set(CMAKE_USE_PTHREADS_INIT ON)
find_package(Threads REQUIRED)
add_executable(pthreads pthreads/test.c)
#add_executable(pthreads pthreads/pthreads1.c pthreads/pthread2.c)
#add_executable(pthreads_mut pthreads/pthreads_mutex.c)
#add_executable(pthreads_cond pthreads/pthreads_condition.c)
target_link_libraries(pthreads Threads::Threads)
#target_link_libraries(pthreads_mut Threads::Threads)
#target_link_libraries(pthreads_cond Threads::Threads)


add_executable(MultiThread ${SOURCE_FILES})
#add_executable(process_system process/systemex.c)
#add_executable(process_fork1 process/forkex1.c)
#add_executable(process_fork2 process/forkex2.c)