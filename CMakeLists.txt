cmake_minimum_required (VERSION 3.17.2)
project (ElfLoader)

# Compare the new contents with the existing file, if it exists and is the 
# same we don't want to trigger a make by changing its timestamp.
function(update_file path content)
    set(old_content "")
    if(EXISTS "${path}")
        file(READ "${path}" old_content)
    endif()
    if(NOT old_content STREQUAL content)
        file(WRITE "${path}" "${content}")
    endif()
endfunction(update_file)

# Creates a file called CMakeDeps.cmake next to your CMakeLists.txt with
# the list of dependencies in it - this file should be treated as part of 
# CMakeLists.txt (source controlled, etc.).
function(update_deps_file deps)
    set(deps_file "CMakeDeps.cmake")
    # Normalize the list so it's the same on every machine
    list(REMOVE_DUPLICATES deps)
    foreach(dep IN LISTS deps)
        file(RELATIVE_PATH rel_dep ${CMAKE_CURRENT_SOURCE_DIR} ${dep})
        list(APPEND rel_deps ${rel_dep})
    endforeach(dep)
    list(SORT rel_deps)
    # Update the deps file
    set(content "# generated by make process\nset(sources ${rel_deps})\n")
    update_file(${deps_file} "${content}")
    # Include the file so it's tracked as a generation dependency we don't
    # need the content.
    include(${deps_file})
endfunction(update_deps_file)

file(GLOB_RECURSE sourcesCore LIST_DIRECTORIES false src/ElfLoader/Core/*.cpp)
update_deps_file("${sourcesCore}")
add_library(ElfLoaderCore SHARED ${sourcesCore})

find_package(glog 0.4.0 REQUIRED)
target_link_libraries(ElfLoaderCore glog::glog)

find_package(Boost 1.72 REQUIRED)
include_directories(${Boost_INCLUDE_DIR})

file(GLOB_RECURSE sourcesElf64 LIST_DIRECTORIES false src/ElfLoader/Elf64/*.cpp)
update_deps_file("${sourcesElf64}")
add_library(ElfLoaderElf64 SHARED ${sourcesElf64})

file(GLOB_RECURSE sourcesForkProcessor LIST_DIRECTORIES false src/ElfLoader/ForkProcessor/*.cpp)
update_deps_file("${sourcesForkProcessor}")
add_library(ElfLoaderForkProcessor SHARED ${sourcesForkProcessor})

file(GLOB_RECURSE sourcesLinux LIST_DIRECTORIES false src/ElfLoader/Linux/*.cpp)
update_deps_file("${sourcesLinux}")
add_library(ElfLoaderLinux SHARED ${sourcesLinux})

file(GLOB_RECURSE sourcesExec LIST_DIRECTORIES false src/ElfLoader/Cli/*.cpp)
update_deps_file("${sourcesExec}")
add_executable(ElfLoader ${sourcesExec})

target_include_directories(ElfLoaderCore PRIVATE src)
target_include_directories(ElfLoaderElf64 PRIVATE src)
target_include_directories(ElfLoaderForkProcessor PRIVATE src)
target_include_directories(ElfLoaderLinux PRIVATE src)
target_include_directories(ElfLoader PRIVATE src)

target_link_libraries (ElfLoaderElf64 LINK_PUBLIC ElfLoaderCore)
target_link_libraries (ElfLoaderForkProcessor LINK_PUBLIC ElfLoaderCore)
target_link_libraries (ElfLoaderLinux LINK_PUBLIC ElfLoaderCore)

target_link_libraries (ElfLoader LINK_PUBLIC ElfLoaderCore)
target_link_libraries (ElfLoader LINK_PUBLIC ElfLoaderElf64)
target_link_libraries (ElfLoader LINK_PUBLIC ElfLoaderForkProcessor)
target_link_libraries (ElfLoader LINK_PUBLIC ElfLoaderLinux)

set_property(TARGET ElfLoaderCore PROPERTY CXX_STANDARD 20)
set_property(TARGET ElfLoaderElf64 PROPERTY CXX_STANDARD 20)
set_property(TARGET ElfLoaderForkProcessor PROPERTY CXX_STANDARD 20)
set_property(TARGET ElfLoaderLinux PROPERTY CXX_STANDARD 20)
set_property(TARGET ElfLoader PROPERTY CXX_STANDARD 20)