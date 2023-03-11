#include "Node.hpp"

c_Node::c_Node(int p_NodeId, t_NodeType p_NodeType) {
    m_NodeId = p_NodeId;
    m_Type = p_NodeType;
    if (p_NodeType == E_Type_Switch) {
        m_Neighbours.resize(E_Switch_Size);
        m_InputBuffer.resize(E_Switch_Size, new c_Queue());
        m_OutputBuffer.resize(E_Switch_Size, new c_Queue());
    } else {
        m_Neighbours.resize(E_Repeater_Size);
        m_InputBuffer.resize(E_Repeater_Size, new c_Queue());
        m_OutputBuffer.resize(E_Repeater_Size, new c_Queue());
    }
}

void c_Node::f_SetNeighbour(int p_Index, c_Node *p_Neighbour) {
    m_Neighbours[p_Index] = p_Neighbour;
}

int c_Node::f_GetType() const {
    return m_Type;
}

void c_Node::f_fetch() {
    // TODO Pull the transaction into Queue.
    // Create a Network Packet.
    // Push the Network Packet into Queue.
}

void c_Node::f_decode() {
    // Read the elements of the Queue.
    // Populate the Network Packet and Source destination and other info.
}

void c_Node::f_issue() {
    // Scheduler.
}

void c_Node::f_execute() {
    // Send the packet.
}
