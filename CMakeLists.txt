cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

project(ProtocolWire CXX)

option(build_tests "build tests" OFF)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_CXX_STANDARD 11)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

include_directories("${CMAKE_SOURCE_DIR}/include")

set(
  library_sources
    src/Sell.cpp
    src/RequestFullPiece.cpp
    src/Ready.cpp
    src/Payment.cpp
    src/JoiningContract.cpp
    src/JoinContract.cpp
    src/FullPiece.cpp
    src/Buy.cpp
    src/Observe.cpp
    src/SellerTerms.cpp
    src/BuyerTerms.cpp
    src/PieceData.cpp
    src/NetworkInt.cpp
    src/OutputWireStream.cpp
    src/InputWireStream.cpp
    src/char_array_buffer.cpp
    src/BinaryStreamWriter.cpp
    src/BinaryStreamReader.cpp
)

# === build library ===
add_library(protocol_wire ${library_sources})

# === build tests ===
if(build_tests)
  file(GLOB tests RELATIVE "${PROJECT_SOURCE_DIR}" "test/test_*.cpp")

  enable_testing()

  foreach(s ${tests})
    get_filename_component (sn ${s} NAME_WE)
    add_executable(${sn} ${s})
    target_link_libraries(${sn} protocol_wire ${CONAN_LIBS})
    add_test(${sn} "bin/${sn}")
  endforeach(s)

endif()
