#ifndef NODE_HPP
#define NODE_HPP

#include "types.hpp"
#include "Packet.hpp"
#include "Queue.hpp"

class c_Node {
    private:
        int m_NodeId;

        int m_Type;

        t_Coordinate m_Coordinate;

        t_Neighbours m_Neighbours;

        vector<c_Queue*> m_InputBuffer;

        vector<c_Queue*> m_OutputBuffer;
    public:

        c_Node(int p_NodeId,t_NodeType p_NodeType);

        void f_SetNeighbour(int p_Index,c_Node* p_Neighbour);

        t_NodeType f_GetType() const;

        void f_fetch();

        void f_decode();

        void f_issue();

        void f_execute();
};

#endif
