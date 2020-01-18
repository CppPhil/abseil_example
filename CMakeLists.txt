cmake_minimum_required(VERSION 3.14)

project(MyApp VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(${CMAKE_BINARY_DIR}/../deps/abseil)

add_executable(myExe main.cpp)

target_link_libraries(myExe absl::base absl::algorithm absl::debugging absl::flat_hash_map
                            absl::flags absl::memory absl::meta absl::numeric absl::strings 
                            absl::synchronization absl::time absl::utility)

