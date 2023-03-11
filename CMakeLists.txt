cmake_minimum_required(VERSION 3.22)
project(NoCMain)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/noc/config)
include_directories(src/noc/topology)
include_directories(src/noc/types)
include_directories(src/noc/routing)
include_directories(src/noc/node)
include_directories(src/noc/pipeline)
include_directories(src/noc/test)
include_directories(src/noc/structures)
include_directories(src/noc/packet)

add_executable(NoCMain
        src/noc/config/ConfigReader.cpp
        src/noc/config/ConfigReader.hpp
        src/noc/routing/Routing.hpp
        src/noc/routing/Routing.cpp
        src/noc/node/Node.hpp
        src/noc/node/Node.cpp
        src/noc/packet/Packet.hpp
        src/noc/packet/Packet.cpp
        src/noc/structures/Queue.cpp
        src/noc/structures/Queue.hpp
        src/noc/routing/ShortestPathRouting.cpp
        src/noc/routing/ShortestPathRouting.hpp
        src/noc/test/main.cpp
        src/noc/test/main.hpp
        src/noc/topology/TopologyConfig.cpp
        src/noc/topology/TopologyConfig.hpp
        src/noc/topology/Topology.cpp
        src/noc/topology/Topology.hpp
        src/noc/types/types.hpp
        src/noc/pipeline/NetworkController.hpp
        src/noc/pipeline/NetworkController.cpp

        )
