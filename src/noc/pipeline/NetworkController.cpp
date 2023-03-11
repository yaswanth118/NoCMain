#include "NetworkController.hpp"

void c_NetworkController::f_clockCycle() {
//    f_execute();
//    f_issue();
//    f_decode();
//    f_fetch();
}

int c_NetworkController::f_GetDirection(t_NodeId p_Src, t_NodeId p_Dest) {
    return m_RoutingTable[p_Src][p_Dest];
}

c_NetworkController::c_NetworkController(t_RoutingTable p_RoutingTable, t_ListOfNodes p_ListOfNodes) {
    m_RoutingTable = p_RoutingTable;
    m_ListOfNodes = p_ListOfNodes;

}

void c_NetworkController::f_execute() {
//    for (auto & m_ListOfNode : m_ListOfNodes) {
//        m_ListOfNode->f_execute();
//    }
}

void c_NetworkController::f_issue() {
//    for (auto & m_ListOfNode : m_ListOfNodes) {
//        m_ListOfNode->f_issue();
//    }
}

void c_NetworkController::f_decode() {
//    for (auto & m_ListOfNode : m_ListOfNodes) {
//        m_ListOfNode->f_decode();
//    }
}

void c_NetworkController::f_fetch() {
//    for (auto & m_ListOfNode : m_ListOfNodes) {
//        m_ListOfNode->f_fetch();
//    }
}